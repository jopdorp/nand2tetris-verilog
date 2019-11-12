`ifndef half_adder
  `include "half_adder.sv"
`endif
`define full_adder 1

module full_adder(
    input  a,
    input  b,
    input  c,
    output carry,
    output sum
);
    half_adder sum_ab(a, b, carry_a_b, sum_a_b);
    half_adder sum_abc(sum_a_b, c, carry_a_b_c, sum);
    or_n2t full_add(carry_a_b, carry_a_b_c, carry);
endmodule
