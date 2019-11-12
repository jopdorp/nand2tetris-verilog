`include "not_16.sv"

module not_16_tb();
    reg [15:0]  in = 16'b0000000000000000;
    wire [15:0] out;

    not_16 u1(in, out);

    task display_and_assert;
        begin
            assert (out == ~in) else begin
                $error("out: %b expected: %b, in: %b", out, ~in, in);
            end
        end
    endtask

    generate
        genvar i;
        for (i = 0; i <= 15; i = i+1) begin
            initial begin
                if (i == 0) begin
                    #1 display_and_assert();
                end
                else begin
                    #(i*2) in[i] = 1;
                    #1 display_and_assert();
                end
            end
        end
    endgenerate
endmodule
