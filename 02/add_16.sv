module add_16(a, b, out);
    input  [15:0] a;
    input  [15:0] b;
    output [15:0] out;

    wire carry[15:0];

    generate
        genvar i;
        for (i = 0; i <= 15; i = i+1) begin
            if (i == 0) begin
                full_adder full_add(a[i], b[i], 0, carry[i], out[i]);
            end else begin
                full_adder full_add(a[i], b[i], carry[i-1], carry[i], out[i]);
            end
        end
    endgenerate
endmodule
