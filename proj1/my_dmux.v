`include "my_and.v"

module my_dmux(a, b, i, s);
   input i, s;
   output a, b;

   wire   s_n;

   my_not u1(s_n, s);
   my_and u2(a, i, s_n);
   my_and u3(b, i, s);
endmodule
