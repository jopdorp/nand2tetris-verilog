module dmux_8_way_tb();
    reg       in;
    reg [2:0] select;

    wire      a;
    wire      b;
    wire      c;
    wire      d;
    wire      e;
    wire      f;
    wire      g;
    wire      h;

    dmux_8_way u1(in, select, a, b, c, d, e, f, g, h);

    function void assert_else_error(
        reg a_exp, reg b_exp, reg c_exp, reg d_exp, reg e_exp, reg f_exp, reg g_exp, reg h_exp
    );
        assert (a == a_exp &&
            b == b_exp &&
            c == c_exp &&
            d == d_exp &&
            e == e_exp &&
            f == f_exp &&
            g == g_exp &&
            h == h_exp)
        else begin
            $error("dmux_4_way in: %b, select: %b, outputs (%b %b %b %b %b %b %b %b) expected (%b %b %b %b %b %b %b %b)",
                in, select, a, b, c, d, e, f, g, h, a_exp, b_exp, c_exp, d_exp, e_exp, f_exp, g_exp, h_exp);

        end
    endfunction

    initial
        begin
            in = 1;
            select = 3'b000;
            #1 assert_else_error(1, 0, 0, 0, 0, 0, 0, 0);

            #1 select = 3'b001;
            #1 assert_else_error(0, 1, 0, 0, 0, 0, 0, 0);

            #1 select = 3'b010;
            #1 assert_else_error(0, 0, 1, 0, 0, 0, 0, 0);

            #1 select = 3'b011;
            #1 assert_else_error(0, 0, 0, 1, 0, 0, 0, 0);

            #1 select = 3'b100;
            #1 assert_else_error(0, 0, 0, 0, 1, 0, 0, 0);

            #1 select = 3'b101;
            #1 assert_else_error(0, 0, 0, 0, 0, 1, 0, 0);

            #1 select = 3'b110;
            #1 assert_else_error(0, 0, 0, 0, 0, 0, 1, 0);

            #1 select = 3'b111;
            #1 assert_else_error(0, 0, 0, 0, 0, 0, 0, 1);
        end

endmodule
