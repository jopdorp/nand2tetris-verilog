`ifndef mux
  `include "mux.sv"
`endif
`define mux_16 1

module mux_16(
    input  [15:0] a,
    input  [15:0] b,
    input         select,
    output [15:0] out
);

    // Put your code here

endmodule
