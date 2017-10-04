`include "my_not.v"

module my_not16(b[15:0], a[15:0]);
   input [15:0] a;
   output [15:0] b;
   
   my_not u1(b[0], a[0]);
   my_not u2(b[1], a[1]);
   my_not u3(b[2], a[2]);
   my_not u4(b[3], a[3]);
   my_not u5(b[4], a[4]);
   my_not u6(b[5], a[5]);
   my_not u7(b[6], a[6]);
   my_not u8(b[7], a[7]);
   my_not u9(b[8], a[8]);
   my_not u10(b[9], a[9]);
   my_not u11(b[10], a[10]);
   my_not u12(b[11], a[11]);
   my_not u13(b[12], a[12]);
   my_not u14(b[13], a[13]);
   my_not u15(b[14], a[14]);
   my_not u16(b[15], a[15]);
endmodule
