`include "not_n2t.sv"

module or_n2t(input a, input b, output out);
   not_n2t not_n2t_a(a, not_a);
   not_n2t not_n2t_b(b, not_b);
   nand or_ab(out, not_a, not_b);
endmodule
