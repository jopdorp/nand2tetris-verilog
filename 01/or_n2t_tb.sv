module or_n2t_tb();
    reg  a;
    reg  b;
    reg  expected;

    wire out;

    or u1(out, a, b);

    function void assert_else_error;
        assert (a | b == out) else $error("xor a: %b,  b: %b, out: %b,  expected: %b", a, b, out, expected);
    endfunction

    initial begin
        a = 0;
        b = 0;
        expected = 0;
        #1 assert_else_error();

        #1 a = 0;
        b = 1;
        expected = 1;
        #1 assert_else_error();

        #1 a = 1;
        b = 0;
        expected = 1;
        #1 assert_else_error();

        #1 a = 1;
        b = 1;
        expected = 1;
        #1 assert_else_error();
    end

endmodule
