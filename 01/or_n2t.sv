`include "not_n2t.sv"

module or_n2t(output out, input a, input b);
   wire not_a;
   wire not_b;

   not_n2t not_n2t_a(not_a, a);
   not_n2t not_n2t_b(not_b, b);

   nand nand_ab(out, not_a, not_b);
endmodule
