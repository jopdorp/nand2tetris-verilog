module HVSyncGenerator(
  input clk,
  input reset,
  output reg hsync, vsync, hblank, vblank,
  output reg [9:0] hpos,
  output reg [9:0] vpos
);

  // declarations for TV-simulator sync parameters
  // horizontal constants
  parameter H_DISPLAY       = 512; // horizontal display width
  parameter H_BACK          =  23; // horizontal left border (back porch)
  parameter H_FRONT         =   7; // horizontal right border (front porch)
  parameter H_SYNC          =  23; // horizontal sync width
  // vertical constants
  parameter V_DISPLAY       = 256; // vertical display height
  parameter V_TOP           =   5; // vertical top border
  parameter V_BOTTOM        =  14; // vertical bottom border
  parameter V_SYNC          =   3; // vertical sync # lines
  // derived constants
  parameter H_SYNC_START    = H_DISPLAY + H_FRONT;
  parameter H_SYNC_END      = H_DISPLAY + H_FRONT + H_SYNC - 1;
  parameter H_MAX           = H_DISPLAY + H_BACK + H_FRONT + H_SYNC - 1;
  parameter V_SYNC_START    = V_DISPLAY + V_BOTTOM;
  parameter V_SYNC_END      = V_DISPLAY + V_BOTTOM + V_SYNC - 1;
  parameter V_MAX           = V_DISPLAY + V_TOP + V_BOTTOM + V_SYNC - 1;

  wire hmaxxed = (hpos == H_MAX) || reset;	// set when hpos is maximum
  wire vmaxxed = (vpos == V_MAX) || reset;	// set when vpos is maximum
  
  // horizontal position counter
  always @(posedge clk)
  begin
    hsync <= (hpos>=H_SYNC_START && hpos<=H_SYNC_END);
    if(hmaxxed)
      hpos <= 0;
    else
      hpos <= hpos + 1;
  end

  // vertical position counter
  always @(posedge clk)
  begin
    vsync <= (vpos>=V_SYNC_START && vpos<=V_SYNC_END);
    if(hmaxxed)
      if (vmaxxed)
        vpos <= 0;
      else
        vpos <= vpos + 1;
  end
  
  // hblank and vblank
  always @(posedge clk) begin
      hblank <= hpos>H_DISPLAY;
      vblank <= vpos>V_DISPLAY;
  end

endmodule
