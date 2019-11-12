`ifndef dmux
  `include "dmux.sv"
`endif
`define dmux_4_way 1

module dmux_4_way(
    input       in,
    input [1:0] sel,
    output      a,
    output      b,
    output      c,
    output      d
);

    wire a1;
    wire b1;
    dmux dmux_step1(in, sel[0], a1, b1);
    dmux dmux_ab(a1, sel[1], a, c);
    dmux dmux_cd(b1, sel[1], b, d);
endmodule
