`ifndef mux_16
  `include "mux_16.sv"
`endif
`define mux_4_way_16 1

module mux_4_way_16(
    input  [15:0] a,
    input  [15:0] b,
    input  [15:0] c,
    input  [15:0] d,
    input  [1:0]  select,
    output [15:0] out
);
    wire[15:0] out_ab;
    wire[15:0] out_cd;

    mux_16 mux_16_ab(a,b,select[0], out_ab);
    mux_16 mux_16_cb(c,d,select[0], out_cd);
    mux_16 mux_combined(out_ab, out_cd, select[1], out);
endmodule
