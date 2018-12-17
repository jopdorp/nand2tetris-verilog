`include "not_16.sv"

module not_16_tb();
    reg [15:0]  in = 16'b0000000000000000;
    wire [15:0] out;

    not_16 u1(out, in);

    function void display_and_assert;
        assert (out == ~in) else $error("out: %b expected: %b, in: %b", out, ~in, in);
    endfunction

    generate
        genvar i;
        for (i = -1; i <= 15; i = i+1) begin
            initial begin
                if (i == -1) begin
                    #1 display_and_assert();
                end
                else begin
                    #(i*2+2) in[i] = 1;
                    #1 display_and_assert();
                end
            end
        end
    endgenerate
endmodule
