module add16(c, a, b);
   input [15:0] a;
   input [15:0] b;
   output [15:0] c;

   reg low = 0;
   wire[15:0] ca;

   full_adder u0(ca[0], c[0], a[0], b[0], low);
   full_adder u1(ca[1], c[1], a[1], b[1], ca[0]);
   full_adder u2(ca[2], c[2], a[2], b[2], ca[1]);
   full_adder u3(ca[3], c[3], a[3], b[3], ca[2]);
   full_adder u4(ca[4], c[4], a[4], b[4], ca[3]);
   full_adder u5(ca[5], c[5], a[5], b[5], ca[4]);
   full_adder u6(ca[6], c[6], a[6], b[6], ca[5]);
   full_adder u7(ca[7], c[7], a[7], b[7], ca[6]);
   full_adder u8(ca[8], c[8], a[8], b[8], ca[7]);
   full_adder u9(ca[9], c[9], a[9], b[9], ca[8]);
   full_adder u10(ca[10], c[10], a[10], b[10], ca[9]);
   full_adder u11(ca[11], c[11], a[11], b[11], ca[10]);
   full_adder u12(ca[12], c[12], a[12], b[12], ca[11]);
   full_adder u13(ca[13], c[13], a[13], b[13], ca[12]);
   full_adder u14(ca[14], c[14], a[14], b[14], ca[13]);
   full_adder u15(ca[15], c[15], a[15], b[15], ca[14]);
endmodule
