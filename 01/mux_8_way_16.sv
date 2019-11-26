`ifndef mux_4_way_16
  `include "mux_4_way_16.sv"
`endif
`define mux_8_way_16 1

module mux_8_way_16(
    input  [15:0] a,
    input  [15:0] b,
    input  [15:0] c,
    input  [15:0] d,
    input  [15:0] e,
    input  [15:0] f,
    input  [15:0] g,
    input  [15:0] h,
    input  [2:0]  select,
    output [15:0] out
);

    // Put your code here

endmodule
