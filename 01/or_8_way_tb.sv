`include "or_8_way.sv"

module or_8_way_tb();
    reg [7:0] in;
    wire      out;
    reg       expected;

    or_8_way or_8_way(in, out);


    task assert_else_error;
        if (in > 0) begin
            expected = 1;
        end
        else begin
            expected = 0;
        end

        assert (out == expected) else $error("in: %b, out: %b, expected: %b", in, out, expected);
    endtask

    initial begin
        in = 8'b00000000;
        #1 assert_else_error();
        #1 in = 8'b00000001;
        #1 assert_else_error();
        #1 in = 8'b00010000;
        #1 assert_else_error();
        #1 in = 8'b00000010;
        #1 assert_else_error();
        #1 in = 8'b00110001;
        #1 assert_else_error();
        #1 in = 8'b10000000;
        #1 assert_else_error();
        #1 in = 8'b11111111;
        #1 assert_else_error();
    end

endmodule
