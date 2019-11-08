module not_16(
    input [15:0] in,
    output [15:0] out
);
    generate
        genvar i;
        for (i = 0; i <= 15; i = i+1) begin
            not_n2t not_n2t(in[i], out[i]);
        end
    endgenerate
endmodule