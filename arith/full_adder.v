module full_adder(ca, s, a, b, c);
   input a, b, c;
   output ca, s;

   // s
   wire x_ab;
   xor u1(x_ab, a, b);
   xor u2(s, x_ab, c);

   // ca
   wire and_ab, and_ac, and_bc;
   wire or_abac;

   and u3(and_ab, a, b);
   and u4(and_ac, a, c);
   and u5(and_bc, b, c);
   or u6(or_abac, and_ab, and_ac);
   or u7(ca, or_abac, and_bc);
endmodule
