module my_or16(c[15:0], b[15:0], a[15:0]);
   input [15:0] a;
   input [15:0] b;
   output [15:0] c;
   
   my_or u1(c[0], b[0], a[0]);
   my_or u2(c[1], b[1], a[1]);
   my_or u3(c[2], b[2], a[2]);
   my_or u4(c[3], b[3], a[3]);
   my_or u5(c[4], b[4], a[4]);
   my_or u6(c[5], b[5], a[5]);
   my_or u7(c[6], b[6], a[6]);
   my_or u8(c[7], b[7], a[7]);
   my_or u9(c[8], b[8], a[8]);
   my_or u10(c[9], b[9], a[9]);
   my_or u11(c[10], b[10], a[10]);
   my_or u12(c[11], b[11], a[11]);
   my_or u13(c[12], b[12], a[12]);
   my_or u14(c[13], b[13], a[13]);
   my_or u15(c[14], b[14], a[14]);
   my_or u16(c[15], b[15], a[15]);
endmodule
