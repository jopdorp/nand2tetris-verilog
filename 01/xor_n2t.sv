`ifndef and_n2t
  `include "and_n2t.sv"
`endif
`define xor_n2t 1

module xor_n2t(input a, input b, output out);
    or_n2t a_or_b(a, b, a_or_b);
    nand a_nand_b(a_nand_b, a, b);
    and_n2t xor_n2t(a_or_b, a_nand_b,out);
endmodule