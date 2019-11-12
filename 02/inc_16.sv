`ifndef half_adder
  `include "half_adder.sv"
`endif
`define inc_16 1

module inc_16(input [15:0] in, output [15:0] out);
    wire carry[15:0];
    half_adder flip_first(in[0], 1'b1, carry[0], out[0]);

    generate
        genvar i;
        for (i=1; i <= 15; i = i+1) begin
            half_adder flip_until_no_carry(in[i], carry[i-1], carry[i], out[i]);
        end
    endgenerate

endmodule