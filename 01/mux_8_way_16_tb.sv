`include "mux_8_way_16.sv"

module mux_8_way_16_tb();
    reg [15:0]  a = 16'b0101010101010101;
    reg [15:0]  b = 16'b1010101010101010;
    reg [15:0]  c = 16'b0000000011111111;
    reg [15:0]  d = 16'b1111111100000000;
    reg [15:0]  e = 16'b0011001100110011;
    reg [15:0]  f = 16'b1100110011001100;
    reg [15:0]  g = 16'b0000111100001111;
    reg [15:0]  h = 16'b1111000011110000;
    reg [2:0]   select;
    reg [15:0]  expected;

    wire [15:0] out;

    mux_8_way_16 u1(a, b, c, d, e, f, g, h, select, out);
    task assert_else_error(input [15:0] expected);
        assert (out == expected) else begin
            $error("mux_8_way_16 select: %b, out: %b, expected: %b, a: %b, b: %b, c: %b, d: %b, e: %b, f: %b, g: %b, h: %b"
                ,select, out, expected, a, b, c, d, e, f, g, h);
        end
    endtask

    initial begin
        select = 3'b000;
        #1 assert_else_error(16'b0101010101010101);

        #1 select = 3'b001;
        #1 assert_else_error(16'b1010101010101010);

        #1 select = 3'b010;
        #1 assert_else_error(16'b0000000011111111);

        #1 select = 3'b011;
        #1 assert_else_error(16'b1111111100000000);

        #1 select = 3'b100;
        #1 assert_else_error(16'b0011001100110011);

        #1 select = 3'b101;
        #1 assert_else_error(16'b1100110011001100);

        #1 select = 3'b110;
        #1 assert_else_error(16'b0000111100001111);

        #1 select = 3'b111;
        #1 assert_else_error(16'b1111000011110000);
    end

endmodule
