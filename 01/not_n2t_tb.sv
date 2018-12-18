`include "not_n2t.sv"

module not_n2t_tb();
    reg in;
    reg expected;
    reg out;

    not_n2t gate1(in, out);

    initial begin
        in = 0;
        #10 assert (out == ~in);
        #10 in = 1;
        #10 assert (out == ~in);
    end
endmodule
