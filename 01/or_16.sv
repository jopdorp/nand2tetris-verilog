`include "or_n2t.sv"

module or_16(
    input[15:0] a,
    input[15:0] b,
    output[15:0] out
);

    generate
        genvar i;
        for (i = 0; i <= 15; i = i+1) begin
            or_n2t or_n2t(a[i], b[i], out[i]);
        end
    endgenerate

endmodule
