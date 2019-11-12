`include "bit_n2t.sv"

module bit_n2t_tb();
    reg  in, load, exp_out;
    reg  clk;
    reg  reset;
    wire out;

    bit_n2t u1(in, load, clk, out);

    task assert_else_error(exp_out);
        assert (out == exp_out) else begin
            $error("bit %b %b %b (%b %b)", in, load, clk, out, exp_out);
        end
    endtask

    initial
        begin
            #1 in = 0; load = 1; clk = 0;
            #1 in = 0; load = 1; clk = 1;
            #1 assert_else_error(0);

            #1 in = 1; load = 0; clk = 0;
            #1 assert_else_error(0);
            #1 in = 1; load = 0; clk = 1;
            #1 assert_else_error(0);

            #1 in = 1; load = 1; clk = 0;
            #1 assert_else_error(0);
            #1 in = 1; load = 1; clk = 1;
            #1 assert_else_error(1);

            #1 in = 0; load = 1; clk = 0;
            #1 assert_else_error(1);

            #1 in = 0; load = 1; clk = 1;
            #1 assert_else_error(0);

            #1 in = 0; load = 0; clk = 0;
            #1 assert_else_error(0);
            #1 in = 0; load = 0; clk = 1;
            #1 assert_else_error(0);

            #1 in = 1; load = 0; clk = 0;
            #1 assert_else_error(0);
            #1 in = 1; load = 0; clk = 1;
            #1 assert_else_error(0);

            #1 in = 0; load = 1; clk = 0;
            #1 assert_else_error(0);
            #1 in = 0; load = 1; clk = 1;
            #1 assert_else_error(0);

            #1 in = 1; load = 1; clk = 0;
            #1 assert_else_error(0);
            #1 in = 1; load = 1; clk = 1;
            #1 assert_else_error(1);
        end

endmodule
