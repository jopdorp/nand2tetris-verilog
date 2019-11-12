`include "or_16.sv"

module or_16_tb();
    reg [15:0]  a;
    reg [15:0]  b;
    reg [15:0]  expected;

    wire [15:0] out;


    or_16 or_16(a, b, out);

    task display_and_assert;
        assert (out == a | b) else $error("out: %b expected: %b, a: %b, b %b", out, a | b, a, b);
    endtask
    
    initial
        begin
            a = 16'b0000000000000000;
            b = 16'b0000000000000000;
            #1 display_and_assert();
            
            #1 a[0] = 1;
            #1 display_and_assert();

            #1 b[0] = 1;
            #1 display_and_assert();

            #1 b[1] = 1;
            #1 display_and_assert();

            #1 a[1] = 1;
            #1 display_and_assert();

            #1 a[2] = 1;
            #1 display_and_assert();

            #1 b[2] = 1;
            #1 display_and_assert();

            #1 b[3] = 1;
            #1 display_and_assert();

            #1 a[3] = 1;
            #1 display_and_assert();
        end

endmodule
