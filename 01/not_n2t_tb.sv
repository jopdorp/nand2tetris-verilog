`include "not_n2t.sv"

module not_n2t_tb();
    reg in;
    reg expected;
    reg result;

    not_n2t gate1(result, in);

    initial begin
        in = 0;
        expected = 1;
        assert (expected == ~in);
        #10 in = 1;
        expected = 0;
        assert (expected == in);
    end
endmodule
