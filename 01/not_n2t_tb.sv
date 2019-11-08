module not_n2t_tb();
    reg in;
    wire out;
    reg exp_out;

    not_n2t gate1(in, out);

    function assert_else_error(input exp_out);
        assert (out == exp_out) else begin
            $display("assertion fail! in %b out %b, expected: %b)", in, out, exp_out);
        end
    endfunction

    initial begin
        in = 0;
        #1 assert_else_error(1);
        #1 in = 1;
        #1 assert_else_error(10);
    end
endmodule
