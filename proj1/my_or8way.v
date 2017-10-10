`include "my_or.v"

module my_or8way(b, a[8:0]);
   input [8:0] a;
   output b;

   wire 	  or_1_2;
   wire 	  or_3_4;
   wire 	  or_5_6;
   wire 	  or_7_8;
   wire 	  or_1_2_3_4;
   wire 	  or_5_6_7_8;

   my_or u1(or_1_2, a[0], a[1]);
   my_or u2(or_3_4, a[2], a[3]);
   my_or u3(or_5_6, a[4], a[5]);
   my_or u4(or_7_8, a[6], a[7]);
   my_or u5(or_1_2_3_4, or_1_2, or_3_4);
   my_or u6(or_5_6_7_8, or_5_6, or_7_8);
   my_or u7(b, or_1_2_3_4, or_5_6_7_8);
endmodule 

