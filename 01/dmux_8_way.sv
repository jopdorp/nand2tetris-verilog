`ifndef dmux_4_way
  `include "dmux_4_way.sv"
`endif
`define dmux_8_way 1

module dmux_8_way(
    input       in,
    input [2:0] select,
    output      a,
    output      b,
    output      c,
    output      d,
    output      e,
    output      f,
    output      g,
    output      h
);

    dmux split(in, select[2], low, high);
    dmux_4_way dmux_low_nibble(low, select[1:0], a, b, c, d);
    dmux_4_way dmux_high_nibble(high, select[1:0], e, f, g, h);

endmodule
