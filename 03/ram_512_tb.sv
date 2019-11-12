`include "ram_512.sv"

module ram_512_tb();
    reg [15:0]  in;
    reg [8:0]   addr;
    reg         load, clk;

    wire [15:0] out;

    ram_512 u1(in, addr, load, clk, out);

    task assert_else_error(reg [15:0] exp_out);
        assert (out === exp_out) else begin
            $error("ram_512 %b %b %b %b (%b %b)", in, addr, load, clk, out, exp_out);
        end
    endtask

    initial
        begin
            // load in data

            load = 1;
            in = 16'b0000000000000000; addr = 9'b000000000; clk = 0; // addr 0
            #1 clk = 1;

            #1 in = 16'b1111111111111111; addr = 9'b001000000; clk = 0; // addr 1
            #1 clk = 1;

            #1 in = 16'b0000000011111111; addr = 9'b010000000; clk = 0; // addr 2
            #1 clk = 1;

            #1 in = 16'b1111111100000000; addr = 9'b011000000; clk = 0; // addr 3
            #1 clk = 1;

            #1 in = 16'b0000111100001111; addr = 9'b100000000; clk = 0; // addr 4
            #1 clk = 1;

            #1 in = 16'b1111000011110000; addr = 9'b101000000; clk = 0; // addr 5
            #1 clk = 1;

            #1 in = 16'b0011001100110011; addr = 9'b110000000; clk = 0; // addr 6
            #1 clk = 1;

            #1 in = 16'b1100110011001100; addr = 9'b111000000; clk = 0; // addr 7
            #1 clk = 1;

            // read out data
            #1 load = 0;

            #1 addr = 9'b000000000; clk = 0;
            #1 clk = 1;
            #1 assert_else_error(16'b0000000000000000);

            #1 addr = 9'b001000000; clk = 0;
            #1 clk = 1;
            #1 assert_else_error(16'b1111111111111111);

            #1 addr = 9'b010000000; clk = 0;
            #1 clk = 1;
            #1 assert_else_error(16'b0000000011111111);

            #1 addr = 9'b011000000; clk = 0;
            #1 clk = 1;
            #1 assert_else_error(16'b1111111100000000);

            #1 addr = 9'b100000000; clk = 0;
            #1 clk = 1;
            #1 assert_else_error(16'b0000111100001111);

            #1 addr = 9'b101000000; clk = 0;
            #1 clk = 1;
            #1 assert_else_error(16'b1111000011110000);

            #1 addr = 9'b110000000; clk = 0;
            #1 clk = 1;
            #1 assert_else_error(16'b0011001100110011);

            #1 addr = 9'b111000000; clk = 0;
            #1 clk = 1;
            #1 assert_else_error(16'b1100110011001100);
        end

endmodule
