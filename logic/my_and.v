module my_and(c, a, b);
   input a, b;
   output c;

   wire d;

   nand u1(d, a, b);
   my_not u2(c, d);
endmodule 
