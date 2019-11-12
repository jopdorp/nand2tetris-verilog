`include "and_n2t.sv"

module and_n2t_tb();
    reg  a;
    reg  b;
    reg  expected;

    wire out;

    and_n2t tested_intance(a, b, out);

    task assert_else_error;
        assert (expected == out) else $error("a was %d, b was %d, out was %d, expected %d\n", a , b, out, expected);
    endtask

    initial
        begin
            a = 0;
            b = 0;
            expected = 0;
            #1 assert_else_error();
            #1;
            a = 0;
            b = 1;
            expected = 0;
            #1 assert_else_error();
            #1;
            a = 1;
            b = 0;
            expected = 0;
            #1 assert_else_error();
            #1;
            a = 1;
            b = 1;
            expected = 1;
            #1 assert_else_error();
        end

endmodule
