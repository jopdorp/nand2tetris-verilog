module add_16(
    input  [15:0] a,
    input  [15:0] b,
    output [15:0] out
);
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

    half_adder half_add(a[0], b[0], carry_0, out[0]);
    full_adder _1_full_add(a[1], b[1], carry_0, carry_1, out[1]);    
    full_adder _2_full_add(a[2], b[2], carry_1, carry_2, out[2]);    
    full_adder _3_full_add(a[3], b[3], carry_2, carry_3, out[3]);    
    full_adder _4_full_add(a[4], b[4], carry_3, carry_4, out[4]);    
    full_adder _5_full_add(a[5], b[5], carry_4, carry_5, out[5]);    
    full_adder _6_full_add(a[6], b[6], carry_5, carry_6, out[6]);    
    full_adder _7_full_add(a[7], b[7], carry_6, carry_7, out[7]);    
    full_adder _8_full_add(a[8], b[8], carry_7, carry_8, out[8]);    
    full_adder _9_full_add(a[9], b[9], carry_8, carry_9, out[9]);    
    full_adder _10_full_add(a[10], b[10], carry_9, carry_10, out[10]);    
    full_adder _11_full_add(a[11], b[11], carry_10, carry_11, out[11]);    
    full_adder _12_full_add(a[12], b[12], carry_11, carry_12, out[12]);    
    full_adder _13_full_add(a[13], b[13], carry_12, carry_13, out[13]);    
    full_adder _14_full_add(a[14], b[14], carry_13, carry_14, out[14]);    
    full_adder _15_full_add(a[15], b[15], carry_14, carry_15, out[15]);    
    
endmodule
