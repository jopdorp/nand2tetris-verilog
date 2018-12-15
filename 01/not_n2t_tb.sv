`include "not_n2t.sv"

module not_n2t_tb();
    reg  a;
    reg  expected;

    wire b;

    not_n2t gate1(b, a);

    initial begin
        a = 0;
        expected = 0;
        #1 a = 1;
        expected = 0;
    end

    initial
        $monitor("not_n2t %d %b (%b %b)", $time, a, b, expected);

endmodule
