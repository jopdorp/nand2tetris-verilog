`ifndef and_n2t
  `include "and_n2t.sv"
`endif
`define mux 1

module mux(
    input  a,
    input  b,
    input  select,
    output out
);
    wire select_and_b, not_select, not_select_and_a;
    and_n2t select_b(select, b, select_and_b);
    not_n2t notsel(select, not_select);
    and_n2t not_sel_not_a(not_select, a, not_select_and_a);
    or_n2t mux(select_and_b, not_select_and_a, out);
endmodule
