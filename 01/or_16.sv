`ifndef or_n2t
  `include "or_n2t.sv"
`endif
`define or_16 1

/**
 * 16-bit bitwise Or gate: for i=0..15 out[i] = a[i] or b[i].
 */
 
module or_16(
    input[15:0] a,
    input[15:0] b,
    output[15:0] out
);

    // Put your code here

endmodule
