module my_dmux8way(b, c, d, e, f, g, h, j, a, sel[2:0]);
   input a;
   input [2:0] sel;

   output      b;
   output      c;
   output      d;
   output      e;
   output      f;
   output      g;
   output      h;
   output      j;
   
   wire        nsel2;
   
   wire        a_sel2;
   wire        a_nsel2;

   my_not u1(nsel2, sel[2]);

   my_and u2(a_sel2, a, sel[2]);
   my_and u3(a_nsel2, a, nsel2);

   my_dmux4way u4(b, c, d, e, a_nsel2, sel[1:0]);
   my_dmux4way u5(f, g, h, j, a_sel2, sel[1:0]);
endmodule
