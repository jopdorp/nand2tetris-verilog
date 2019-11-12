`include "dmux.sv"

module dmux_tb();
    reg  in = 0;
    reg  select = 0;

    wire a;
    wire b;

    dmux u1(in, select, a, b);
    task assert_else_error(input expected_a, input expected_b);
        assert (a == expected_a && b == expected_b) else begin
            $error("dmux in: %b, select: %b, (a: %b, expected_a: %b) (b: %b, expected_b %b)",
                in, select, a, expected_a, b, expected_b);
        end
    endtask

    initial
        begin
            in = 0;
            select = 0;
            #1 assert_else_error(0, 0);

            #1 in = 0;
            select = 1;
            #1 assert_else_error(0, 0);

            #1 in = 1;
            select = 0;
            #1 assert_else_error(1, 0);

            #1 in = 1;
            select = 1;
            #1 assert_else_error(0, 1);
        end

endmodule
