module test_inc16();
    reg [15:0]  a;
    reg [15:0]  ex_b;

    wire [15:0] b;

    inc16 u1(b, a);

    initial
        begin
            a = 16'b0000000000000000;
            ex_b = 16'b0000000000000001;

            #1
                a = 16'b1111111111111111;
            ex_b = 16'b0000000000000000;

            #1
                a = 16'b0000000000000101;
            ex_b = 16'b0000000000000110;

            #1
                a = 16'b1111111111111011;
            ex_b = 16'b1111111111111100;
        end

    initial
        $monitor("inc16 %d %b (%b %b)", $time, a, b, ex_b);

endmodule   
