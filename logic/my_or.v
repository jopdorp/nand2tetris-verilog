module my_or(c, a, b);
   input a, b;
   output c;

   wire a_n, b_n;

   my_not u1(a_n, a);
   my_not u2(b_n, b);
   nand u3(c, a_n, b_n);
endmodule 
