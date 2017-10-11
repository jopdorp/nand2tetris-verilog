module my_mux8way16(j[15:0], a[15:0], b[15:0], c[15:0], d[15:0], e[15:0], f[15:0], g[15:0], h[15:0], sel[2:0]);
   input [15:0] a;
   input [15:0] b;
   input [15:0] c;
   input [15:0] d;
   input [15:0] e;
   input [15:0] f;
   input [15:0] g;
   input [15:0] h;
   input [2:0] sel;

   output [15:0] j;

   wire [15:0] 	 a_b_c_d;
   wire [15:0] 	 e_f_g_h;

   my_mux4way16 u1(a_b_c_d, a, b, c, d, sel[1:0]);
   my_mux4way16 u2(e_f_g_h, e, f, g, h, sel[1:0]);
   my_mux16 u3(j, a_b_c_d, e_f_g_h, sel[2]);
endmodule 

