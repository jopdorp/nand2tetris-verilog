`ifndef and_n2t
  `include "and_n2t.sv"
`endif
`define xor_n2t 1

module xor_n2t(input a, input b, output out);
    wire a_or_b;
    or_n2t a_or_b_(a, b, a_or_b);
    wire a_nand_b;
    nand a_nand_b_(a_nand_b, a, b);
    and_n2t xor_n2t_(a_or_b, a_nand_b,out);
endmodule