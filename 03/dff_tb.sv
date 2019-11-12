`include "dff.sv"

module dff_tb();
    reg  clk, data;
    reg  exp_out;
    wire out;

    dff u1(data, clk, out);

    task assert_else_error(exp_out);
        assert(out == exp_out) else begin
            $error("dff %b %b (%b %b)", clk, data, out, exp_out);
        end
    endtask
    initial
        begin
            clk = 0; data = 0; //exp_out = x;
            #1 clk = 1; data = 0;
            #1 assert_else_error(0);
            #1 clk = 0; data = 1;
            #1 assert_else_error(0);
            #1 clk = 1; data = 1;
            #1 assert_else_error(1);
            #1 clk = 0; data = 0;
            #1 assert_else_error(1);
            #1 clk = 1; data = 0;
            #1 assert_else_error(0);
            #1 clk = 0; data = 1;
            #1 assert_else_error(0);
            #1 clk = 1; data = 1;
            #1 assert_else_error(1);
        end

endmodule
