module register_tb();
    reg [15:0]  in;
    reg         load, clk;
    wire [15:0] out;

    register u1(in, load, clk, out);

    function void assert_else_error(reg [15:0] exp_out);
        assert (out == exp_out) else begin
            $error("register %b %b %b (%b %b)", in, load, clk, out, exp_out);
        end
    endfunction

    initial
        begin
            #1 in = 16'b0000000000000000; load = 1; clk = 0;
            #1 in = 16'b0000000000000000; load = 1; clk = 1;
            #1 assert_else_error(16'b0000000000000000);

            #1 in = 16'b1111111111111111; load = 0; clk = 0;
            #1 assert_else_error(16'b0000000000000000);
            #1 in = 16'b1111111111111111; load = 0; clk = 1;
            #1 assert_else_error(16'b0000000000000000);

            #1 in = 16'b1111111111111111; load = 1; clk = 0;
            #1 assert_else_error(16'b0000000000000000);
            #1 in = 16'b1111111111111111; load = 1; clk = 1;
            #1 assert_else_error(16'b1111111111111111);

        end

endmodule
