module alu_optimized2(x, y, out, fn, zero);
  input[15:0] x, y;
  input[5:0] fn;
  output[15:0] out;
  output zero;
  wire zx = fn[5];
  wire nx = fn[4];
  wire zy = fn[3];
  wire ny = fn[2];
  wire add = fn[1];
  wire no = fn[0];
  wire[15:0] x0 = zx ? 16'b0 : x;
  wire[15:0] y0 = zy ? 16'b0 : y;
  wire[15:0] x1 = nx ? ~x0 : x0;
  wire[15:0] y1 = ny ? ~y0 : y0;
  wire[15:0] out0 = add ? x1 + y1 : x1 & y1;
  assign out = no ? ~out0 : out0;
  assign zero = ~|out;
endmodule