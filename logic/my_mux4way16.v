module my_mux4way16(e[15:0], a[15:0], b[15:0], c[15:0], d[15:0], sel[1:0]);
   input [15:0] a;
   input [15:0] b;
   input [15:0] c;
   input [15:0] d;
   input [1:0] sel;

   output [15:0] e;

   wire [15:0] 	 a_b;
   wire [15:0] 	 c_d;

   my_mux16 u1(a_b, a, b, sel[0]);
   my_mux16 u2(c_d, c, d, sel[0]);
   my_mux16 u3(e, a_b, c_d, sel[1]);
endmodule 

