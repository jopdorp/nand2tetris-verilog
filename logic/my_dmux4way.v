module my_dmux4way(b, c, d, e, a, sel[1:0]);
   input a;
   input [1:0] sel;

   output      b;
   output      c;
   output      d;
   output      e;
   
   wire        nsel0;
   wire        nsel1;
   
   wire        nsel0_nsel1;
   wire        nsel0_sel1;
   wire        sel0_nsel1;
   wire        sel0_sel1;

   my_not u1(nsel0, sel[0]);
   my_not u2(nsel1, sel[1]);
   
   my_and u3(nsel0_nsel1, nsel0, nsel1);
   my_and u4(sel0_nsel1, sel[0], nsel1);
   my_and u5(nsel0_sel1, nsel0, sel[1]);
   my_and u6(sel0_sel1, sel[0], sel[1]);

   my_and u7(b, nsel0_nsel1, a);
   my_and u8(c, sel0_nsel1, a);
   my_and u9(d, nsel0_sel1, a);
   my_and u10(e, sel0_sel1, a);
endmodule
