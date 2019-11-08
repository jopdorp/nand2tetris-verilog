module xor_n2t(input a, input b, output out);
    wire a_or_b, a_nand_b;
    or_n2t ab_or(a, b, a_or_b);
    nand nand_ab(a_nand_b, a, b);
    and_n2t xor_n2t(a_or_b, a_nand_b,out);
endmodule