module or_8_way(
    input [7:0] in,
    output      out
);
    or_n2t or1(in[0], in[1], or_01);
    or_n2t or2(or_01, in[2], or_2);
    or_n2t or3(or_2, in[3], or_3);
    or_n2t or4(or_3, in[4], or_4);
    or_n2t or5(or_4, in[5], or_5);
    or_n2t or6(or_5, in[6], or_6);
    or_n2t or7(or_6, in[7], out);
endmodule
