`include "full_adder.sv"

module full_adder_tb();
    reg  a, b, c;
    wire carry, sum;

    full_adder u1(a, b, c, carry, sum);

    task assert_else_error(reg exp_carry, reg exp_sum);
        assert (exp_carry == carry && exp_sum == sum) else begin
            $error("half_adder %b %b %c, (%b %b) (%b %b)", a, b, c,  carry, exp_carry, sum, exp_sum);
        end
    endtask

    initial
        begin
            a = 0;
            b = 0;
            c = 0;
            #1 assert_else_error(0,0);

            #1 a = 1;
            b = 0;
            c = 0;
            #1 assert_else_error(0,1);

            #1 a = 0;
            b = 1;
            c = 0;
            #1 assert_else_error(0,1);

            #1 a = 1;
            b = 1;
            c = 0;
            #1 assert_else_error(1,0);

            #1 a = 0;
            b = 0;
            c = 1;
            #1 assert_else_error(0,1);

            #1 a = 1;
            b = 0;
            c = 1;
            #1 assert_else_error(1,0);

            #1 a = 0;
            b = 1;
            c = 1;
            #1 assert_else_error(1,0);

            #1 a = 1;
            b = 1;
            c = 1;
            #1 assert_else_error(1,1);
        end
endmodule
