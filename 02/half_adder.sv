module half_adder(
    input  a,
    input  b,
    output carry,
    output sum
);
    xor_n2t add(a, b, sum);
    and_n2t car(a, b, carry);
endmodule