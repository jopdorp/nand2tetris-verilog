module alu(out, x, y, zx, zy, nx, ny, f, no);
   input [15:0] x;
   input [15:0] y;
   input zx, zy, nx, ny, f, no;

   output [15:0] out;

   reg [15:0] 	 zero;
   
   initial
     zero = 16'b0000000000000000;
   
   // x procesing
   wire [15:0] zx_o;
   wire [15:0] nx_;
   wire [15:0] nx_o;
  
   my_mux16 u1(zx_o, x, zero, zx);
   my_not16 u2(nx_, zx_o);
   my_mux16 u3(nx_o, zx_o, nx_, nx);

   // y processing
   wire [15:0] zy_o;
   wire [15:0] ny_;
   wire [15:0] ny_o;
  
   my_mux16 u4(zy_o, y, zero, zy);
   my_not16 u5(ny_, zy_o);
   my_mux16 u6(ny_o, zy_o, ny_, ny);

   // function
   wire [15:0] and_out;
   wire [15:0] add_out;
   wire [15:0] f_out;
   
   my_and16 u7(and_out, nx_o, ny_o);
   add16 u8(add_out, nx_o, ny_o);
   my_mux16 u9(f_out, and_out, add_out, f);

   // output processing
   wire [15:0] o_neg;
   
   my_not16 u10(o_neg, f_out);
   my_mux16 u11(out, f_out, o_neg, no);
endmodule
