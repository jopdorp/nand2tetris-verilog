module my_mux(c, a, b, s);
   input a, b, s;
   output c;

   wire   s_n, s_n_a, s_b;

   my_not u1(s_n, s);

   my_and u2(s_n_a, s_n, a);
   my_and u3(s_b, s, b);

   my_or u4(c, s_n_a, s_b);
endmodule 
