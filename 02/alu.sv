`ifndef or_8_way
  `include "../01/or_8_way.sv"
`endif
`ifndef mux_16
  `include "../01/mux_16.sv"
`endif
`ifndef add_16
  `include "add_16.sv"
`endif
`ifndef and_16
  `include "../01/and_16.sv"
`endif
`ifndef not_16
  `include "../01/not_16.sv"
`endif
`define alu 1

/**
 * The ALU. Computes one of the following functions:
 * x+y, x-y, y�x, 0, 1, -1, x, y, -x, -y, !x, !y,
 * x+1, y+1, x-1, y-1, x&y, x|y on two 16-bit inputs.
 * Which function to compute is determined by 6 input bits 
 * denoted zx, nx, zy, ny, f, no.
 * The computed function's value is called "out".
 * In addition to computing out, the ALU computes two 
 * 1-bit outputs called zr and ng:
 * if out == 0, zr = 1; otherwise zr = 0;
 * If out < 0, ng = 1; otherwise ng = 0.
 * The 6-bit combinations (zx,nx,zy,ny,f,no) and 
 * their effect are documented in the book. 
 */

// Implementation: the ALU manipulates the x and y
// inputs and then operates on the resulting values, 
// as follows:
// if (zx  == 1) sets x = 0        // 16-bit constant
// if (nx  == 1) sets x = ~x       // bitwise "not"
// if (zy  == 1) sets y = 0        // 16-bit constant
// if (ny  == 1) sets y = ~y       // bitwise "not"
// if (f   == 1) sets out = x + y  // integer 2's-complement addition
// if (f   == 0) sets out = x & y  // bitwise And
// if (no  == 1) sets out = ~out   // bitwise Not
// if (out == 0) sets zr = 1
// if (out < 0)  sets ng = 1

module alu(
    input  [15:0] x,
    input  [15:0] y,
    input         zx,
    input         nx,
    input         zy,
    input         ny,
    input         f,
    input         no,
    output [15:0] out,
    output        zr,
    output        ng
);
   
       // Put your code here

endmodule
