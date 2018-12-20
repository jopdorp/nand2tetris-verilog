module full_adder(a, b, c, carry, sum);
   input a, b, c;
   output carry, sum;

   half_adder sum_ab(a, b, carry_a_b, sum_a_b);
   half_adder sum_abc(sum_a_b, c, carry_a_b_c, sum);
   or_n2t full_add(carry_a_b, carry_a_b_c, carry);

endmodule
