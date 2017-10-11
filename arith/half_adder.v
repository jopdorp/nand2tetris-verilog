module half_adder(a, b, ca, s);
   input a, b;
   output ca, s;

   and u1(ca, a, b);
   xor u2(s, a, b);
endmodule
   
