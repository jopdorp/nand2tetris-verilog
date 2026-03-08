`ifndef not_n2t
   `include "not_n2t.sv"
`endif
`define not_16 1

/**
 * 16-bit Not gate: for i=0..15: out[i] = not in[i]
 */

module not_16(
    input [15:0] in,
    output [15:0] out
);

    // Put your code here

endmodule
