module pc_tb();
    reg  [15:0] in;
    reg         load;
    reg         inc;
    reg         reset;
    reg         clk;
    wire [15:0] out;

    pc program_counter(in, load, inc, reset, clk, out);

    function void assert_else_error(reg [15:0] exp_out);
        assert (out == exp_out) else begin
            $error("in %b load %b inc %b reset %b (out %b  exp_out %b)", in, load, inc, reset, out, exp_out);
        end
    endfunction

    initial
        begin
            in = 16'b0000000000000010;
            load = 1;
            inc = 0;
            reset = 0;
            #1 clk=0;
            #1 clk=1;
            #1 assert_else_error(16'b0000000000000010);
            
            #1 in = 16'b0000000000000110;
            load = 0;
            inc = 0;
            reset = 0;
            #1 clk=0;
            #1 clk=1;
            #1 assert_else_error(16'b0000000000000010);

            #1 in = 16'b0000000000000110;
            load = 1;
            inc = 0;
            reset = 0;
            #1 clk=0;
            #1 clk=1;
            #1 assert_else_error(16'b0000000000000110);

            #1 in = 16'b0000000000000100;
            load = 0;
            inc = 1;
            reset = 0;
            #1 clk=0;
            #1 clk=1;
            #1 assert_else_error(16'b0000000000000111);

            #1 in = 16'b0000000000000100;
            load = 1;
            inc = 1;
            reset = 0;
            #1 clk=0;
            #1 clk=1;
            #1 assert_else_error(16'b0000000000000100);

            #1 in = 16'b0000000000000100;
            load = 0;
            inc = 0;
            reset = 1;
            #1 clk=0;
            #1 clk=1;
            #1 assert_else_error(16'b0000000000000000);
        end

endmodule
