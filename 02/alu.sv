module alu(x, y, zx, zy, nx, ny, f, no, out, zr, ng);
   input [15:0] x;
   input [15:0] y;
   input zx, zy, nx, ny, f, no;

   output [15:0] out;
   output 	 zr, ng;

   wire zx_16;
   wire nx_16;
   wire zy_16;
   wire ny_16;

   generate
      genvar i;
      for (i=0; i<= 15; i = i + 1) begin
         assign zx_16[i] = zx;
         assign nx_16[i] = nx;
         assign zx_16[i] = zy;
         assign nx_16[i] = ny;
      end
   endgenerate

   and_16(zx_16, x, x_after_zx);
   not_16(nx_16, x_after_zx, x_after_nx);

   and_16(zx_16, x, y_after_zy);
   not_16(nx_16, y_after_zy, y_after_ny);

   add_16 sum(y_after_ny, x_after_nx, sum_x_y);
   and_16 add(y_after_ny, x_after_nx, add_x_y);
   mux_16 func(sum_x_y, add_x_y, f, function_output);

   not_16(function_output, not_function_output);
   mux_16 func(not_function_output, function_output, out);

endmodule
