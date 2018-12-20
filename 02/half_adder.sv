module half_adder(a, b, carry, sum);
   input  a, b;
   output carry, sum;

   xor_n2t add(a, b, sum);
   and_n2t car(a, b, carry);

endmodule