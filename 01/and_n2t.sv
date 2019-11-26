`ifndef or_n2t
  `include "or_n2t.sv"
`endif
`define and_n2t 1

module and_n2t(input a, input b, output out);
    wire nand_a_b;
    nand nand_b_a(nand_a_b, a, b);
    not_n2t and_n2t(nand_a_b, out);
endmodule 
