`include "and_n2t.sv"

module and_16(
   output [15:0] out,
   input [15:0] a,
   input [15:0] b
);

   generate
      genvar i;
      for (i = 0; i <= 15; i = i+1) begin
         and_n2t and_n2t(out[i], a[i], b[i]);
      end
   endgenerate

endmodule
