module mux_16(
    input  [15:0] a,
    input  [15:0] b,
    input         select,
    output [15:0] out
);
    generate
        genvar i;
        for (i = 0; i <= 15; i = i+1) begin
            mux mux(a[i], b[i], select, out[i]);
        end
    endgenerate

endmodule
