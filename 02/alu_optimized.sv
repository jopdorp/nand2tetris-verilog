module alu_optimized(x, y, zx, nx, zy, ny, f, no, out, zr, ng);
  input [15:0] x, y;
  input f, no, nx, ny, zx, zy;
  output [15:0] out;
  output ng, zr;

  wire [15:0] x1 = zx ? 16'b0 : x;
  wire [15:0] notX = ~x1;
  wire [15:0] x2 = nx ? notX : x1;

  wire [15:0] y1 = zy ? 16'b0 : y;
  wire [15:0] notY = ~y1;
  wire [15:0] y2 = ny ? notY : y1;

  wire [15:0] addXY = x2 + y2;
  wire [15:0] andXY = x2 & y2;

  wire [15:0] resultF = f ? addXY : andXY;
  assign out = no ? ~resultF : resultF;
  assign zr = out[15:0] == 0;
  assign ng = out[15];
endmodule
