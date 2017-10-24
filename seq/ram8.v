module ram8(out, in, addr, load, clk);
   input [15:0] in;
   input [2:0] 	addr;
   input 	load, clk;
   output [15:0] out;
   wire reset;
   wire load_r0, load_r1, load_r2, load_r3, load_r4, load_r5, load_r6, load_r7;
   wire [15:0] r0, r1, r2, r3, r4, r5, r6, r7;
   wire [15:0] o0, o1, o2, o3, o4, o5, o6, o7;
   
   assign reset = 0;
   assign out = o6;

   // storage

   register u0(r0, in, load_r0, reset, clk);
   register u1(r1, in, load_r1, reset, clk);
   register u2(r2, in, load_r2, reset, clk);
   register u3(r3, in, load_r3, reset, clk);
   register u4(r4, in, load_r4, reset, clk);
   register u5(r5, in, load_r5, reset, clk);
   register u6(r6, in, load_r6, reset, clk);
   register u7(r7, in, load_r7, reset, clk);

   // writing
   my_dmux8way u8(load_r0, load_r1, load_r2, load_r3, load_r4, load_r5, load_r6, load_r7, load, addr);

   // reading
   my_mux16 u9(o0, r0, r1, addr[0]);
   my_mux16 u10(o1, r2, r3, addr[0]);
   my_mux16 u11(o2, r4, r5, addr[0]);
   my_mux16 u12(o3, r6, r7, addr[0]);

   my_mux16 u13(o4, o0, o1, addr[1]);
   my_mux16 u14(o5, o2, o3, addr[1]);

   my_mux16 u15(o6, o4, o5, addr[2]);
   
endmodule
