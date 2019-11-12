`ifndef full_adder
   `include "full_adder.sv"
`endif
`define add_16 1

module add_16(
    input  [15:0] a,
    input  [15:0] b,
    output [15:0] out
);
    wire          carry[15:0];

    half_adder full_add(a[0], b[0], carry[0], out[0]);
    
    generate
        genvar i;
        for (i = 1; i <= 15; i = i+1) begin
            full_adder full_add(a[i], b[i], carry[i-1], carry[i], out[i]);
        end
    endgenerate
endmodule
