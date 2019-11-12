`include "dmux_4_way.sv"

module dmux_4_way_tb();
    reg       in = 1;
    reg [1:0] select;

    wire      a;
    wire      b;
    wire      c;
    wire      d;

    dmux_4_way u1(in, select, a, b, c, d);

    task assert_else_error(input a_exp, input b_exp, input c_exp, input d_exp);
        assert (a == a_exp &&
            b == b_exp &&
            c == c_exp &&
            d == d_exp)
        else begin
            $error("dmux_4_way in: %b, select: %b, outputs (%b %b %b %b) expected (%b %b %b %b)",
                in, select, a, b, c, d, a_exp, b_exp, c_exp, d_exp);

        end
    endtask

    initial
        begin
            select = 2'b00;

            #1 assert_else_error(1, 0, 0, 0);

            #1 select = 2'b01;
            #1 assert_else_error(0, 1, 0, 0);

            #1 select = 2'b10;
            #1 assert_else_error(0, 0, 1, 0);

            #1 select = 2'b11;
            #1 assert_else_error(0, 0, 0, 1);
        end

endmodule
