`include "half_adder.sv"

module half_adder_tb();
    reg  a, b;
    wire carry, sum;

    half_adder add(a, b, carry, sum);

    task assert_else_error(reg exp_carry, reg exp_sum);
        assert (exp_carry == carry && exp_sum == sum) else begin
            $error("half_adder %b %b (%b %b) (%b %b)", a, b, carry, exp_carry, sum, exp_sum);
        end
    endtask

    initial
        begin
            a = 0;
            b = 0;
            #1 assert_else_error(0,0);

            #1 a = 0;
            b = 1;
            #1 assert_else_error(0,1);

            #1 a = 1;
            b = 0;
            #1 assert_else_error(0,1);

            #1 a = 1;
            b = 1;
            #1 assert_else_error(1,0);
        end

endmodule
