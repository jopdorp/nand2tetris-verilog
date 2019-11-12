`include "add_16.sv"

module add_16_tb();
    reg [15:0]  a;
    reg [15:0]  b;

    wire [15:0] out;

    add_16 u1(a, b, out);

    task assert_else_error(input [15:0] exp_out);
        assert (out == exp_out) else begin
            $error("add16 %b %b (%b %b)", a, b, out, exp_out);
        end
    endtask

    initial
        begin
            a = 16'b0000000000000000;
            b = 16'b0000000000000000;
            #1 assert_else_error(16'b0000000000000000);


            #1 a = 16'b0000000000000001;
            b = 16'b0000000000000001;
            #1 assert_else_error(16'b0000000000000010);

            #1 a = 16'b0000000000000011;
            b = 16'b0000000000000001;
            #1 assert_else_error(16'b0000000000000100);


            #1 a = 16'b1111111111111111;
            b = 16'b0000000000000001;
            #1 assert_else_error(16'b0000000000000000);

            #1 a = 16'b1111111111111110;
            b = 16'b1111111111111110;
            #1 assert_else_error(16'b1111111111111100);

            #1 a = 16'b1010101010101010;
            b = 16'b0101010101010101;
            #1 assert_else_error(16'b1111111111111111);

            #1 a = 16'b0011110011000011;
            b = 16'b0000111111110000;
            #1 assert_else_error(16'b0100110010110011);

            #1 a = 16'b0001001000110100;
            b = 16'b1001100001110110;
            #1 assert_else_error(16'b1010101010101010);
        end
endmodule
