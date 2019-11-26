`ifndef and_n2t
  `include "and_n2t.sv"
`endif
`define dmux 1

module dmux(
    input  in,
    input  select,
    output a,
    output b
);

    and_n2t b_if_in_select_and(select, in, b);
    wire not_select;
    not_n2t not_sel(select, not_select);
    and_n2t a_if_in_and_not_select(not_select, in, a);

endmodule
