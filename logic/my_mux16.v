module my_mux16(c[15:0], a[15:0], b[15:0], s);
   input [15:0] a;
   input [15:0] b;
   input 	s;
   output [15:0] c;
   
   my_mux u1(c[0], a[0], b[0], s);
   my_mux u2(c[1], a[1], b[1], s);
   my_mux u3(c[2], a[2], b[2], s);
   my_mux u4(c[3], a[3], b[3], s);
   my_mux u5(c[4], a[4], b[4], s);
   my_mux u6(c[5], a[5], b[5], s);
   my_mux u7(c[6], a[6], b[6], s);
   my_mux u8(c[7], a[7], b[7], s);
   my_mux u9(c[8], a[8], b[8], s);
   my_mux u10(c[9], a[9], b[9], s);
   my_mux u11(c[10], a[10], b[10], s);
   my_mux u12(c[11], a[11], b[11], s);
   my_mux u13(c[12], a[12], b[12], s);
   my_mux u14(c[13], a[13], b[13], s);
   my_mux u15(c[14], a[14], b[14], s);
   my_mux u16(c[15], a[15], b[15], s);
endmodule
