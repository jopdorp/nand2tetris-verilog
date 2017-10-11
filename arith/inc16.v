module inc16(b, a);
   input [15:0] a;
   output [15:0] b;
   reg [15:0] 	 i;

   initial
       i = 16'b0000000000000001;

   add16 u0(b, a, i);
endmodule
