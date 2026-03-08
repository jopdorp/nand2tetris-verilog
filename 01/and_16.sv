`ifndef and_n2t
  `include "and_n2t.sv"
`endif
`define and_16 1

/**
 * 16-bit-wise and gate: for i = 0..15: out[i] = a[i] and b[i]
 */

module and_16(
   input [15:0] a,
   input [15:0] b,
   output [15:0] out
);

    // Put your code here

endmodule
