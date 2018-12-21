module inc_16_tb();
    reg [15:0]  in;
    wire [15:0] out;

    inc_16 increment(in, out);

    function void assert_else_error(reg [15:0] exp_out);
        assert (out == exp_out) else begin
            $error("inc_16 %b (%b %b)", in, out, exp_out);
        end
    endfunction

    initial
        begin
            in = 16'b0000000000000000;
            #1 assert_else_error(16'b0000000000000001);

            #1 in = 16'b1111111111111111;
            #1 assert_else_error(16'b0000000000000000);

            #1 in = 16'b0000000000000101;
            #1 assert_else_error(16'b0000000000000110);

            #1 in = 16'b1111111111111011;
            #1 assert_else_error(16'b1111111111111100);
        end

endmodule
