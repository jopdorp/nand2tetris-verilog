`ifndef not_n2t
   `include "not_n2t.sv"
`endif
`define or_n2t 1

module or_n2t(input a, input b, output out);
   wire not_b;
   wire not_a;
   not_n2t not_n2t_a(a, not_a);
   not_n2t not_n2t_b(b, not_b);
   nand or_ab(out, not_a, not_b);
endmodule
