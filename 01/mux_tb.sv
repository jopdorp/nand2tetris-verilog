`include "mux.sv"

module mux_tb();
    reg  a;
    reg  b;
    reg  select;

    wire out;

    mux mux_to_test(a, b, select, out);

    task assert_else_error(expected);
        assert (expected == out) else $error("a %b, b %b, select %b, out %b, expected %b", a, b, select, out, expected);
    endtask

    initial
        begin
            a = 0;
            b = 0;
            select = 0;
            #1 assert_else_error(0);

            #1;
            a = 0;
            b = 0;
            select = 1;
            #1 assert_else_error(0);

            #1;
            a = 0;
            b = 1;
            select = 0;
            #1 assert_else_error(0);

            #1;
            a = 0;
            b = 1;
            select = 1;
            #1 assert_else_error(1);

            #1
                a = 1;
            b = 0;
            select = 0;
            #1 assert_else_error(1);

            #1;
            a = 1;
            b = 0;
            select = 1;
            #1 assert_else_error(0);

            #1;
            a = 1;
            b = 1;
            select = 0;
            #1 assert_else_error(1);

            #1;
            a = 1;
            b = 1;
            select = 1;
            #1 assert_else_error(1);
        end
endmodule
