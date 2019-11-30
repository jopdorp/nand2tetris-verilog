// nand2tetris Hack computer

`include "./05/cpu_jopdorp_optimized.sv"
`include "./05/rom_32K.sv"
`include "./05/memory.sv"


module emu
(
	//Master input clock
	input         CLK_50M,

	//Async reset from top-level module.
	//Can be used as initial reset.
	input         RESET,

	//Must be passed to hps_io module
	inout  [44:0] HPS_BUS,

	output CLK_VIDEO,

	//Base video clock. Usually equals to CLK_SYS.
	output        VGA_CLK,

	//Multiple resolutions are supported using different VGA_CE rates.
	//Must be based on CLK_VIDEO
	output        VGA_CE,

	output  [7:0] VGA_R,
	output  [7:0] VGA_G,
	output  [7:0] VGA_B,
	output        VGA_HS,
	output        VGA_VS,
	output        VGA_DE,    // = ~(VBlank | HBlank)

	//Base video clock. Usually equals to CLK_SYS.
	output        HDMI_CLK,

	//Multiple resolutions are supported using different HDMI_CE rates.
	//Must be based on CLK_VIDEO
	output        HDMI_CE,

	output  [7:0] HDMI_R,
	output  [7:0] HDMI_G,
	output  [7:0] HDMI_B,
	output        HDMI_HS,
	output        HDMI_VS,
	output        HDMI_DE,   // = ~(VBlank | HBlank)
	output  [1:0] HDMI_SL,   // scanlines fx

	//Video aspect ratio for HDMI. Most retro systems have ratio 4:3.
	output  [7:0] HDMI_ARX,
	output  [7:0] HDMI_ARY,

	output        LED_USER,  // 1 - ON, 0 - OFF.

	// b[1]: 0 - LED status is system status OR'd with b[0]
	//       1 - LED status is controled solely by b[0]
	// hint: supply 2'b00 to let the system control the LED.
	output  [1:0] LED_POWER,
	output  [1:0] LED_DISK,

	output [15:0] AUDIO_L,
	output [15:0] AUDIO_R,
	output        AUDIO_S    // 1 - signed audio samples, 0 - unsigned
);


////////////////////////////  HPS I/O  //////////////////////////////////


`include "build_id.v"
parameter CONF_STR = {
	"HACK;;",
	"F,BIN;",
	"R0,Reset;",
	"V,v",`BUILD_DATE
};

wire  [1:0] buttons;
wire [31:0] status;

wire        ioctl_download;
wire [24:0] ioctl_addr;
wire [15:0] ioctl_dout;
wire        ioctl_wait;
wire        ioctl_wr;

hps_io #(.STRLEN($size(CONF_STR)>>3)) hps_io
(
	.clk_sys(clk_sys),
	.HPS_BUS(HPS_BUS),

	.conf_str(CONF_STR),

	.ioctl_download(ioctl_download),
	.ioctl_wr(ioctl_wr),
	.ioctl_addr(ioctl_addr),
	.ioctl_dout(ioctl_dout),
	.ioctl_wait(ioctl_wait),
	
	.buttons(buttons),
	.status(status),

	.ps2_key(ps2_key)
);


///////////////////////  CLOCK/RESET  ///////////////////////////////////

wire clock_locked;

wire clk_sys;

pll pll
(
	.refclk(CLK_50M),
	.rst(0),
	.outclk_0(clk_sys),
	.locked(clock_locked)
);


wire reset = buttons[1] | status[0] | ioctl_download;


////////////////////////////  SYSTEM  ///////////////////////////////////
wire [14:0] addressM;
wire [15:0] outM, memOut, instruction;
wire writeM;
wire [14:0] pc;
wire r, g, b, hsync, vsync, hblank, vblank;

cpu_jopdorp_optimized cpu(memOut, instruction, reset, clk_sys, outM, writeM, addressM, pc);

assign CLK_VIDEO = clk_vid;
assign HDMI_CLK = clk_sys;
assign HDMI_R = {8{r}};
assign HDMI_G = {8{g}};
assign HDMI_B = {8{b}};
assign HDMI_HS = hsync;
assign HDMI_VS = vsync;
assign HDMI_DE = ~(hblank | vblank);
assign HDMI_ARX = 2;
assign HDMI_ARY = 1;
assign LED_USER  = ioctl_download;
assign LED_DISK  = 0;
assign LED_POWER = 0;

always @(posedge clk_sys) begin
    clk_vid <= ~clk_vid;
end

////////////////////////////  INPUT  ////////////////////////////////////
wire [10:0] ps2_key;
reg [7:0] ps2_ascii;
reg ps2_changed;
reg ps2_released;

// If the user tries hard enough with the gamepad they can get keys stuck 
// until they press them again. This could stand to be improved in the future.

always @(posedge clk_sys) begin
	reg old_state;

	old_state <= ps2_key[10];
	
	ps2_changed <= (old_state != ps2_key[10]);
	ps2_released <= ~ps2_key[9];
	
	
	if(old_state != ps2_key[10]) begin
		casex(ps2_key[8:0])
			'hX16: ps2_ascii <= "1"; // 1
			'hX1E: ps2_ascii <= "2"; // 2
			'hX26: ps2_ascii <= "3"; // 3
			'hX25: ps2_ascii <= "4"; // 4
			'hX2E: ps2_ascii <= "5"; // 5
			'hX36: ps2_ascii <= "6"; // 6
			'hX3D: ps2_ascii <= "7"; // 7
			'hX3E: ps2_ascii <= "8"; // 8
			'hX46: ps2_ascii <= "9"; // 9
			'hX45: ps2_ascii <= "0"; // 0
			
			'hX1C: ps2_ascii <= "a"; // a
			'hX32: ps2_ascii <= "b"; // b
			'hX21: ps2_ascii <= "c"; // c
			'hX23: ps2_ascii <= "d"; // d
			'hX24: ps2_ascii <= "e"; // e
			'hX2B: ps2_ascii <= "f"; // f
			'hX34: ps2_ascii <= "g"; // g
			'hX33: ps2_ascii <= "h"; // h
			'hX43: ps2_ascii <= "i"; // i
			'hX3B: ps2_ascii <= "j"; // j
			'hX42: ps2_ascii <= "k"; // k
			'hX4B: ps2_ascii <= "l"; // l
			'hX3A: ps2_ascii <= "m"; // m
			'hX31: ps2_ascii <= "n"; // n
			'hX44: ps2_ascii <= "o"; // o
			'hX4D: ps2_ascii <= "p"; // p
			'hX15: ps2_ascii <= "q"; // q
			'hX2D: ps2_ascii <= "r"; // r
			'hX1B: ps2_ascii <= "s"; // s
			'hX2C: ps2_ascii <= "t"; // t
			'hX3C: ps2_ascii <= "u"; // u
			'hX2A: ps2_ascii <= "v"; // v
			'hX1D: ps2_ascii <= "w"; // w
			'hX22: ps2_ascii <= "x"; // x
			'hX35: ps2_ascii <= "y"; // y
			'hX1A: ps2_ascii <= "z"; // z
			'hX29: ps2_ascii <= " "; // space
			'hX79: ps2_ascii <= "+"; // +
			'hX7B: ps2_ascii <= "-"; // -
			'hX7C: ps2_ascii <= "*"; // *
			'hX4A: ps2_ascii <= "/"; // /
			'hX55: ps2_ascii <= "="; // /
			'hX1F: ps2_ascii <= 8'h11; // gui l / yes
			'hX27: ps2_ascii <= 8'h12; // gui r / no
			'hX5A: ps2_ascii <= 8'd10; // enter
			'hX66: ps2_ascii <= 8'd8; // backspace
			default: ps2_ascii <= 8'h00;
		endcase
	end
end


////////////////////////////  MEMORY & VIDEO ///////////////////////////////////

	rom_32K rom(pc, instruction);
    memory mem(outM, !clk_sys, writeM, addressM, memOut, ps2_ascii, clk_vid, r, g, b, hsync, vsync, hblank, vblank);

endmodule
