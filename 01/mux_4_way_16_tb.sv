`include "mux_4_way_16.sv"

module mux_4_way_16_tb();
    reg [15:0]  a;
    reg [15:0]  b;
    reg [15:0]  c;
    reg [15:0]  d;
    reg [1:0]   select;

    wire [15:0] out;

    mux_4_way_16 tested_mux_4_way_16(a, b, c, d, select, out);

    task assert_else_error(input [15:0] expected);
        assert (out == expected) else begin
            $error("mux_4_way_16 a: %b b: %b c: %b d: %b select: %b out: %b expected: %b",
                a, b, c, d, select, out, expected);
        end
    endtask

    initial
        begin
            a = 16'b0101010101010101;
            b = 16'b1010101010101010;
            c = 16'b0000000011111111;
            d = 16'b1111111100000000;
            select = 2'b00;
            #1 assert_else_error(16'b0101010101010101);

            #1 select = 2'b01;
            #1 assert_else_error(16'b1010101010101010);

            #1 select = 2'b10;
            #1 assert_else_error(16'b0000000011111111);

            #1 select = 2'b11;
            #1 assert_else_error(16'b1111111100000000);
        end


endmodule
