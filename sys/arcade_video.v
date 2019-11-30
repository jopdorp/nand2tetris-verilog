//============================================================================
//
//  Screen +90/-90 deg. rotation
//  Copyright (C) 2017-2019 Sorgelig
//
//  This program is free software; you can redistribute it and/or modify it
//  under the terms of the GNU General Public License as published by the Free
//  Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope that it will be useful, but WITHOUT
//  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
//  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
//  more details.
//
//  You should have received a copy of the GNU General Public License along
//  with this program; if not, write to the Free Software Foundation, Inc.,
//  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//============================================================================

//
// Output timings are incompatible with any TV/VGA mode.
// The output is supposed to be send to scaler input.
//
module screen_rotate #(parameter WIDTH=320, HEIGHT=240, DEPTH=8, MARGIN=4, CCW=0)
(
	input              clk,
	input              ce,

	input  [DEPTH-1:0] video_in,
	input              hblank,
	input              vblank,

	input              ce_out,
	output [DEPTH-1:0] video_out,
	output reg         hsync,
	output reg         vsync,
	output reg         hblank_out,
	output reg         vblank_out
);

localparam bufsize = WIDTH*HEIGHT;
localparam memsize = bufsize*2;
localparam aw = memsize > 131072 ? 18 : memsize > 65536 ? 17 : 16; // resolutions up to ~ 512x256

reg [aw-1:0] addr_in, addr_out;
reg we_in;
reg buff = 0;

rram #(aw, DEPTH, memsize) ram
(
	.wrclock(clk),
	.wraddress(addr_in),
	.data(video_in),
	.wren(en_we),
	
	.rdclock(clk),
	.rdaddress(addr_out),
	.q(out)
);

wire [DEPTH-1:0] out; 
reg  [DEPTH-1:0] vout;

assign video_out = vout;

wire en_we = ce & ~blank & en_x & en_y;
wire en_x = (xpos<WIDTH);
wire en_y = (ypos<HEIGHT);
integer xpos, ypos;

wire blank = hblank | vblank;
always @(posedge clk) begin
	reg old_blank, old_vblank;
	reg [aw-1:0] addr_row;

	if(en_we) begin
		addr_in <= CCW ? addr_in-HEIGHT[aw-1:0] : addr_in+HEIGHT[aw-1:0];
		xpos <= xpos + 1;
	end

	old_blank <= blank;
	old_vblank <= vblank;
	if(~old_blank & blank) begin
		xpos <= 0;
		ypos <= ypos + 1;
		addr_in  <= CCW ? addr_row + 1'd1 : addr_row - 1'd1;
		addr_row <= CCW ? addr_row + 1'd1 : addr_row - 1'd1;
	end

	if(~old_vblank & vblank) begin
		if(buff) begin
			addr_in  <= CCW ? bufsize[aw-1:0]-HEIGHT[aw-1:0] : HEIGHT[aw-1:0]-1'd1;
			addr_row <= CCW ? bufsize[aw-1:0]-HEIGHT[aw-1:0] : HEIGHT[aw-1:0]-1'd1;
		end else begin
			addr_in  <= CCW ? bufsize[aw-1:0]+bufsize[aw-1:0]-HEIGHT[aw-1:0] : bufsize[aw-1:0]+HEIGHT[aw-1:0]-1'd1;
			addr_row <= CCW ? bufsize[aw-1:0]+bufsize[aw-1:0]-HEIGHT[aw-1:0] : bufsize[aw-1:0]+HEIGHT[aw-1:0]-1'd1;
		end
		buff <= ~buff;
		ypos <= 0;
		xpos <= 0;
	end
end

always @(posedge clk) begin
	reg old_buff;
	reg hs;
	reg ced;

	integer vbcnt;
	integer xposo, yposo, xposd, yposd;
	
	ced <= 0;
	if(ce_out) begin
		ced <= 1;

		xposd <= xposo;
		yposd <= yposo;

		if(xposo == (HEIGHT + 8))  hsync <= 1;
		if(xposo == (HEIGHT + 10)) hsync <= 0;

		if((yposo>=MARGIN) && (yposo<WIDTH+MARGIN)) begin
			if(xposo < HEIGHT) addr_out <= addr_out + 1'd1;
		end

		xposo <= xposo + 1;
		if(xposo > (HEIGHT + 16)) begin
			xposo  <= 0;
			
			if(yposo >= (WIDTH+MARGIN+MARGIN)) begin
				vblank_out <= 1;
				vbcnt <= vbcnt + 1;
				if(vbcnt == 10	) vsync <= 1;
				if(vbcnt == 12) vsync <= 0;
			end
			else yposo <= yposo + 1;
			
			old_buff <= buff;
			if(old_buff != buff) begin
				addr_out <= buff ? {aw{1'b0}} : bufsize[aw-1:0];
				yposo <= 0;
				vsync <= 0;
				vbcnt <= 0;
				vblank_out <= 0;
			end
		end
	end
	
	if(ced) begin
		if((yposd<MARGIN) || (yposd>=WIDTH+MARGIN)) begin
			vout <= 0;
		end else begin
			vout <= out;
		end
		if(xposd == 0)       hblank_out <= 0;
		if(xposd == HEIGHT)  hblank_out <= 1;
	end
end

endmodule

//////////////////////////////////////////////////////////

// DW:
//  6 : 2R 2G 2B
//  8 : 3R 3G 2B
//  9 : 3R 3G 3B
// 12 : 4R 4G 4B

module arcade_rotate_fx #(parameter WIDTH=320, HEIGHT=240, DW=8, CCW=0)
(
	input         clk_video,
	input         ce_pix,

	input[DW-1:0] RGB_in,
	input         HBlank,
	input         VBlank,
	input         HSync,
	input         VSync,

	output        VGA_CLK,
	output        VGA_CE,
	output  [7:0] VGA_R,
	output  [7:0] VGA_G,
	output  [7:0] VGA_B,
	output        VGA_HS,
	output        VGA_VS,
	output        VGA_DE,

	output        HDMI_CLK,
	output        HDMI_CE,
	output  [7:0] HDMI_R,
	output  [7:0] HDMI_G,
	output  [7:0] HDMI_B,
	output        HDMI_HS,
	output        HDMI_VS,
	output        HDMI_DE,
	output  [1:0] HDMI_SL,
	
	input   [2:0] fx,
	input         forced_scandoubler,
	input         no_rotate
);

assign VGA_CLK = clk_video;
assign VGA_CE = ce_pix;
assign VGA_HS = HSync;
assign VGA_VS = VSync;
assign VGA_DE = ~(HBlank | VBlank);

generate
	if(DW == 6) begin
		assign VGA_R = {RGB_in[5:4],RGB_in[5:4],RGB_in[5:4],RGB_in[5:4]};
		assign VGA_G = {RGB_in[3:2],RGB_in[3:2],RGB_in[3:2],RGB_in[3:2]};
		assign VGA_B = {RGB_in[1:0],RGB_in[1:0],RGB_in[1:0],RGB_in[1:0]};
	end
	else if(DW == 8) begin
		assign VGA_R = {RGB_in[7:5],RGB_in[7:5],RGB_in[7:6]};
		assign VGA_G = {RGB_in[4:2],RGB_in[4:2],RGB_in[4:3]};
		assign VGA_B = {RGB_in[1:0],RGB_in[1:0],RGB_in[1:0],RGB_in[1:0]};
	end
	else if(DW == 9) begin
		assign VGA_R = {RGB_in[8:6],RGB_in[8:6],RGB_in[8:7]};
		assign VGA_G = {RGB_in[5:3],RGB_in[5:3],RGB_in[5:4]};
		assign VGA_B = {RGB_in[2:0],RGB_in[2:0],RGB_in[2:1]};
	end
	else begin
		assign VGA_R = {RGB_in[11:8],RGB_in[11:8]};
		assign VGA_G = {RGB_in[7:4],RGB_in[7:4]};
		assign VGA_B = {RGB_in[3:0],RGB_in[3:0]};
	end
endgenerate

wire [DW-1:0] RGB_out;
wire rhs,rvs,rhblank,rvblank;

screen_rotate #(WIDTH,HEIGHT,DW,4,CCW) rotator
(
	.clk(VGA_CLK),
	.ce(VGA_CE),

	.video_in(RGB_in),
	.hblank(HBlank),
	.vblank(VBlank),

	.ce_out(VGA_CE | ~scandoubler),
	.video_out(RGB_out),
	.hsync(rhs),
	.vsync(rvs),
	.hblank_out(rhblank),
	.vblank_out(rvblank)
);

wire [3:0] Rr,Gr,Br;

generate
	if(DW == 6) begin
		assign Rr = {RGB_out[5:4],RGB_out[5:4]};
		assign Gr = {RGB_out[3:2],RGB_out[3:2]};
		assign Br = {RGB_out[1:0],RGB_out[1:0]};
	end
	else if(DW == 8) begin
		assign Rr = {RGB_out[7:5],RGB_out[7]};
		assign Gr = {RGB_out[4:2],RGB_out[4]};
		assign Br = {RGB_out[1:0],RGB_out[1:0]};
	end
	else if(DW == 9) begin
		assign Rr = {RGB_out[8:6],RGB_out[8]};
		assign Gr = {RGB_out[5:3],RGB_out[5]};
		assign Br = {RGB_out[2:0],RGB_out[2]};
	end
	else begin
		assign Rr = RGB_out[11:8];
		assign Gr = RGB_out[7:4];
		assign Br = RGB_out[3:0];
	end
endgenerate

assign HDMI_CLK = VGA_CLK;
assign HDMI_SL  = no_rotate ? 2'd0 : sl[1:0];
wire [2:0] sl = fx ? fx - 1'd1 : 3'd0;
wire scandoubler = fx || forced_scandoubler;

video_mixer #(WIDTH+4, 1) video_mixer
(
	.clk_sys(HDMI_CLK),
	.ce_pix(VGA_CE | ~scandoubler),
	.ce_pix_out(HDMI_CE),

	.scandoubler(scandoubler),
	.hq2x(fx==1),

	.R(no_rotate ? VGA_R[7:4] : Rr),
	.G(no_rotate ? VGA_G[7:4] : Gr),
	.B(no_rotate ? VGA_B[7:4] : Br),

	.HSync (no_rotate ? HSync  : rhs),
	.VSync (no_rotate ? VSync  : rvs),
	.HBlank(no_rotate ? HBlank : rhblank),
	.VBlank(no_rotate ? VBlank : rvblank),

	.VGA_R(HDMI_R),
	.VGA_G(HDMI_G),
	.VGA_B(HDMI_B),
	.VGA_VS(HDMI_VS),
	.VGA_HS(HDMI_HS),
	.VGA_DE(HDMI_DE)
);

endmodule

//////////////////////////////////////////////////////////

// DW:
//  6 : 2R 2G 2B
//  8 : 3R 3G 2B
//  9 : 3R 3G 3B
// 12 : 4R 4G 4B

module arcade_fx #(parameter WIDTH=320, DW=8)
(
	input         clk_video,
	input         ce_pix,

	input[DW-1:0] RGB_in,
	input         HBlank,
	input         VBlank,
	input         HSync,
	input         VSync,

	output        VGA_CLK,
	output        VGA_CE,
	output  [7:0] VGA_R,
	output  [7:0] VGA_G,
	output  [7:0] VGA_B,
	output        VGA_HS,
	output        VGA_VS,
	output        VGA_DE,

	output        HDMI_CLK,
	output        HDMI_CE,
	output  [7:0] HDMI_R,
	output  [7:0] HDMI_G,
	output  [7:0] HDMI_B,
	output        HDMI_HS,
	output        HDMI_VS,
	output        HDMI_DE,
	output  [1:0] HDMI_SL,
	
	input   [2:0] fx,
	input         forced_scandoubler
);

assign VGA_CLK = clk_video;
assign VGA_CE = ce_pix;
assign VGA_HS = HSync;
assign VGA_VS = VSync;
assign VGA_DE = ~(HBlank | VBlank);

generate
	if(DW == 6) begin
		assign VGA_R = {RGB_in[5:4],RGB_in[5:4],RGB_in[5:4],RGB_in[5:4]};
		assign VGA_G = {RGB_in[3:2],RGB_in[3:2],RGB_in[3:2],RGB_in[3:2]};
		assign VGA_B = {RGB_in[1:0],RGB_in[1:0],RGB_in[1:0],RGB_in[1:0]};
	end
	else if(DW == 8) begin
		assign VGA_R = {RGB_in[7:5],RGB_in[7:5],RGB_in[7:6]};
		assign VGA_G = {RGB_in[4:2],RGB_in[4:2],RGB_in[4:3]};
		assign VGA_B = {RGB_in[1:0],RGB_in[1:0],RGB_in[1:0],RGB_in[1:0]};
	end
	else if(DW == 9) begin
		assign VGA_R = {RGB_in[8:6],RGB_in[8:6],RGB_in[8:7]};
		assign VGA_G = {RGB_in[5:3],RGB_in[5:3],RGB_in[5:4]};
		assign VGA_B = {RGB_in[2:0],RGB_in[2:0],RGB_in[2:1]};
	end
	else begin
		assign VGA_R = {RGB_in[11:8],RGB_in[11:8]};
		assign VGA_G = {RGB_in[7:4],RGB_in[7:4]};
		assign VGA_B = {RGB_in[3:0],RGB_in[3:0]};
	end
endgenerate

assign HDMI_CLK = VGA_CLK;
assign HDMI_SL  = sl[1:0];
wire [2:0] sl = fx ? fx - 1'd1 : 3'd0;
wire scandoubler = fx || forced_scandoubler;

video_mixer #(WIDTH+4, 1) video_mixer
(
	.clk_sys(HDMI_CLK),
	.ce_pix(VGA_CE),
	.ce_pix_out(HDMI_CE),

	.scandoubler(scandoubler),
	.hq2x(fx==1),

	.R(VGA_R[7:4]),
	.G(VGA_G[7:4]),
	.B(VGA_B[7:4]),

	.HSync(HSync),
	.VSync(VSync),
	.HBlank(HBlank),
	.VBlank(VBlank),

	.VGA_R(HDMI_R),
	.VGA_G(HDMI_G),
	.VGA_B(HDMI_B),
	.VGA_VS(HDMI_VS),
	.VGA_HS(HDMI_HS),
	.VGA_DE(HDMI_DE)
);

endmodule

//////////////////////////////////////////////////////////

module rram #(parameter AW=16, DW=8, NW=1<<AW)
(
	input           wrclock,
	input  [AW-1:0] wraddress,
	input  [DW-1:0] data,
	input           wren,

	input	          rdclock,
	input	 [AW-1:0] rdaddress,
	output [DW-1:0] q
);

altsyncram	altsyncram_component
(
	.address_a (wraddress),
	.address_b (rdaddress),
	.clock0 (wrclock),
	.clock1 (rdclock),
	.data_a (data),
	.wren_a (wren),
	.q_b (q),
	.aclr0 (1'b0),
	.aclr1 (1'b0),
	.addressstall_a(1'b0),
	.addressstall_b(1'b0),
	.byteena_a(1'b1),
	.byteena_b(1'b1),
	.clocken0(1'b1),
	.clocken1(1'b1),
	.clocken2(1'b1),
	.clocken3(1'b1),
	.data_b({DW{1'b0}}),
	.eccstatus (),
	.q_a(),
	.rden_a (1'b1),
	.rden_b (1'b1),
	.wren_b(1'b0)
);

defparam
	altsyncram_component.address_aclr_b = "NONE",
	altsyncram_component.address_reg_b = "CLOCK1",
	altsyncram_component.clock_enable_input_a = "BYPASS",
	altsyncram_component.clock_enable_input_b = "BYPASS",
	altsyncram_component.clock_enable_output_b = "BYPASS",
	altsyncram_component.intended_device_family = "Cyclone V",
	altsyncram_component.lpm_type = "altsyncram",
	altsyncram_component.numwords_a = NW,
	altsyncram_component.numwords_b = NW,
	altsyncram_component.operation_mode = "DUAL_PORT",
	altsyncram_component.outdata_aclr_b = "NONE",
	altsyncram_component.outdata_reg_b = "UNREGISTERED",
	altsyncram_component.power_up_uninitialized = "FALSE",
	altsyncram_component.widthad_a = AW,
	altsyncram_component.widthad_b = AW,
	altsyncram_component.width_a = DW,
	altsyncram_component.width_b = DW,
	altsyncram_component.width_byteena_a = 1;

endmodule
