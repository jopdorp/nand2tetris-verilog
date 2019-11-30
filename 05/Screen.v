`include "./HVSyncGenerator.v"
// 512 x 256 black and white display

module Screen(
    input clk,
	input reset,
    input [15:0] in,
    input load,
    input [12:0] address,
    output reg [15:0] out,
	output reg r, g, b, 
	output hsync, vsync, hblank, vblank
);

	wire [9:0] hpos, vpos;

	reg [15:0] vram [8192];

	HVSyncGenerator hvsync(clk, reset, hsync, vsync, hblank, vblank, hpos, vpos);
  
	reg [14:0] vindex; // index into line array
	reg [15:0] vshift; // shift register with current word to output
  
	always @(posedge clk) begin
		if (~(hblank || vblank)) begin
			vshift <= vram[address]; 
			r <= vshift[0];
			g <= vshift[0];
			b <= vshift[0];
			vindex <= vindex + 1;
			vshift <= vshift << 1;
		end else begin
			r <= 1'd0;
			g <= 1'd0;
			b <= 1'd0;
			if (vsync) vindex <= 0; // reset vindex every frame
		end;
	end
	
	 always @(posedge clk) begin
        if (load) begin
            vram[address] <= in;
        end else begin
            out <= vram[address];
        end
    end
endmodule

