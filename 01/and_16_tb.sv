`include "and_16.sv"

module and_16_tb();
    reg [15:0]  a = 16'b0000000000000000;
    reg [15:0]  b = 16'b0000000000000000;
    wire [15:0] out;

    and_16 u1(a, b, out);

    task display_and_assert(input [15:0] expected);
        assert (out == expected) else begin
            $error("out: %b expected: %b, a: %b, b %b", out, expected, a, b);
        end
    endtask

    generate
        genvar i;
        genvar j;
        for (i = 0; i <= 15; i = i+1) begin
            for (j = 0; j <= 15; j = j+1) begin
                initial begin
                    #(i*20+j) a[i] = 1;
                    if (j == 0) begin
                        b = 16'b0000000000000000;
                    end
                    #1 b[j] = 1;
                    #2 display_and_assert(a & b);
                end
            end
        end
    endgenerate

endmodule