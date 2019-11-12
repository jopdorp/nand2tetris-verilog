`ifndef half_adder
  `include "half_adder.sv"
`endif
`define inc_16 1

module inc_16(input [15:0] in, output [15:0] out);
    wire carry_0;
    wire carry_1;
    wire carry_2;
    wire carry_3;
    wire carry_4;
    wire carry_5;
    wire carry_6;
    wire carry_7;
    wire carry_8;
    wire carry_9;
    wire carry_10;
    wire carry_11;
    wire carry_12;
    wire carry_13;
    wire carry_14;
    wire carry_15;

    half_adder flip_first(in[0], 1'b1, carry_0, out[0]);

    half_adder _1_full_add(in[1], carry_0, carry_1, out[1]);    
    half_adder _2_full_add(in[2], carry_1, carry_2, out[2]);    
    half_adder _3_full_add(in[3], carry_2, carry_3, out[3]);    
    half_adder _4_full_add(in[4], carry_3, carry_4, out[4]);    
    half_adder _5_full_add(in[5], carry_4, carry_5, out[5]);    
    half_adder _6_full_add(in[6], carry_5, carry_6, out[6]);    
    half_adder _7_full_add(in[7], carry_6, carry_7, out[7]);    
    half_adder _8_full_add(in[8], carry_7, carry_8, out[8]);    
    half_adder _9_full_add(in[9], carry_8, carry_9, out[9]);    
    half_adder _10_full_add(in[10], carry_9, carry_10, out[10]);    
    half_adder _11_full_add(in[11], carry_10, carry_11, out[11]);    
    half_adder _12_full_add(in[12], carry_11, carry_12, out[12]);    
    half_adder _13_full_add(in[13], carry_12, carry_13, out[13]);    
    half_adder _14_full_add(in[14], carry_13, carry_14, out[14]);    
    half_adder _15_full_add(in[15], carry_14, carry_15, out[15]);    

endmodule