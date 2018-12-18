`include "or_n2t.sv"
`include "and_n2t.sv"

module xor_n2t(input a, input b, output out);
    or_n2t or_ab(a, b, a_or_b);
    nand nand_ab(a_nand_b, a, b);
    and_n2t xor_n2t(a_or_b, a_nand_b,out);
endmodule
