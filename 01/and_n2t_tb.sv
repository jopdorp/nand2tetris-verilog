`include "and_n2t.sv"

module and_n2t_tb();
    reg  a;
    reg  b;
    reg  expected;

    wire out;

    and_n2t tested_intance(out, a, b);

    function void throw_assertion_error;
        $error("a was %d, b was %d, out was %d, expected %d\n", a , b, out, expected);
    endfunction

    initial
        begin
            a = 0;
            b = 0;
            expected = 0;
            #1 assert (expected == out) else throw_assertion_error();
            #10 a = 0;
            b = 1;
            expected = 0;
            #1 assert (expected == out) else throw_assertion_error();
            #10 a = 1;
            b = 0;
            expected = 0;
            #1 assert (expected == out) else throw_assertion_error();
            #10 a = 1;
            b = 1;
            expected = 1;
            #1 assert (expected == out) else throw_assertion_error();
        end

endmodule
