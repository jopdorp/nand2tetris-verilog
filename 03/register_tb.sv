`include "register_n2t.sv"

module register_n2t_tb();
    reg [15:0]  in;
    reg         load, clk;
    wire [15:0] out;

    register_n2t u1(in, load, clk, out);

    task assert_else_error(reg [15:0] exp_out);
        assert (out == exp_out) else begin
            $error("register_n2t %b %b %b (%b %b)", in, load, clk, out, exp_out);
        end
    endtask

    initial
        begin
            #1 clk = 0;
            #1 in = 0; load = 0;
            #1 clk = 1;
            #1 assert_else_error(0);

            #1 in = 0; load = 0; 
            #1 assert_else_error(0);
            #1 clk = 0;

            #1 in = 0; load = 1; 
            #1 assert_else_error(0);
            #1 clk = 1;
            
            #1 in = 0; load = 1; 
            #1 assert_else_error(0);
            #1 clk = 0;
        
            #1 in = -32123; load = 0; 
            #1 assert_else_error(0);
            #1 clk = 1;

            #1 in = -32123; load = 0;
            #1 assert_else_error(0);
            #1 clk = 0;
            
            #1 in = 11111; load = 0; 
            #1 assert_else_error(0);
            #1 clk = 1;

            #1 in = 11111; load = 0; 
            #1 assert_else_error(0);
            #1 clk = 0;

            #1 in = -32123; load = 1; 
            #1 assert_else_error(0);
            #1 clk = 1;
            
            #1 in = -32123; load = 1; 
            #1 assert_else_error(-32123);
            #1 clk = 0;

            #1 in = -32123; load = 1; 
            #1 assert_else_error(-32123);
            #1 clk = 1;
            
            #1 in = -32123; load = 1; 
            #1 assert_else_error(-32123);
            #1 clk = 0;

            #1 in = -32123; load = 0; 
            #1 assert_else_error(-32123);
            #1 clk = 1;

            #1 in = -32123; load = 0; 
            #1 assert_else_error(-32123);
            #1 clk = 0;

            #1 in = 12345; load = 1;
            #1 assert_else_error(-32123);
            #1 clk = 1;

            #1 in = 12345; load = 1; 
            #1 assert_else_error(12345);
            #1 clk = 0;

            #1 in = 0; load = 0; 
            #1 assert_else_error(12345);
            #1 clk = 1;

            #1 in = 0; load = 0; clk = 0;
            #1 assert_else_error(12345);

            #1 in = 0; load = 1; 
            #1 assert_else_error(12345);
            #1 clk = 1;

            #1 in = 0; load = 1; 
            #1 assert_else_error(0);
            #1 clk = 0;

            #1 in = 1; load = 0; 
            #1 assert_else_error(0);
            #1 clk = 1;

            #1 in = 1; load = 0; 
            #1 assert_else_error(0);
            #1 clk = 0;

            #1 in = 1; load = 1; 
            #1 assert_else_error(0);
            #1 clk = 1;

            #1 in = 1; load = 1; 
            #1 assert_else_error(1);
            #1 clk = 0;
        end

endmodule
