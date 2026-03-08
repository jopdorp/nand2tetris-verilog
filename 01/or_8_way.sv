`ifndef or_n2t
  `include "or_n2t.sv"
`endif
`define or_8_way 1

/**
 * 8-way or gate: out = in[0] or in[1] or ... or in[7].
 */

module or_8_way(
    input [7:0] in,
    output      out
);

    // Put your code here

endmodule
