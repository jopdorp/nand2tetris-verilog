module and_n2t(output out, input a, input b);
    wire nand_a_b;
    nand nand_a_b(nand_a_b, a, b);
    not not_a_b(out, nand_a_b);
endmodule 
