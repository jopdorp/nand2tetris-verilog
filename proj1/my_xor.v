`include "my_or.v"

module my_xor(c, a, b);
   input a, b;
   output c;

   wire   a_n, b_n, a_n_b, b_n_a;

   my_not u1(a_n, a);
   my_not u2(b_n, b);

   my_and u3(a_n_b, a_n, b);
   my_and u4(b_n_a, b_n, a);

   my_or u5(c, a_n_b, b_n_a);
endmodule 
