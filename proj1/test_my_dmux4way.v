`include "my_dmux4way.v"

module test_my_dmux4way();
   reg a;
   reg [1:0] sel;

   reg 	     expected_b;
   reg 	     expected_c;
   reg 	     expected_d;
   reg 	     expected_e;

   wire b;
   wire c;
   wire d;
   wire e;

   my_dmux4way u1(b, c, d, e, a, sel);

   initial 
     begin
	a = 1;
        sel = 2'b00;

	expected_b = 1;
	expected_c = 0;
	expected_d = 0;
	expected_e = 0;
	
	#1 
        sel = 2'b01;
	expected_b = 0;
	expected_c = 1;
	expected_d = 0;
	expected_e = 0;
	
	#1 
        sel = 2'b10;
	expected_b = 0;
	expected_c = 0;
	expected_d = 1;
	expected_e = 0;
	
	#1 
        sel = 2'b11;
	expected_b = 0;
	expected_c = 0;
	expected_d = 0;
	expected_e = 1;
     end

   initial
     $monitor("my_dmux4way %d %b %b (%b %b) (%b %b) (%b %b) (%b %b)", $time, a, sel, b, expected_b, c, expected_c, d, expected_d, e, expected_e);
   
endmodule
