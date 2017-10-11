module my_not(b, a);
   input a;
   output b;
   
   nand u1(b, a, a);
endmodule
