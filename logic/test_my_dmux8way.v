module test_my_dmux8way();
   reg a;
   reg [2:0] sel;
   
   reg 	     expected_b;
   reg 	     expected_c;
   reg 	     expected_d;
   reg 	     expected_e;
   reg 	     expected_f;
   reg 	     expected_g;
   reg 	     expected_h;
   reg 	     expected_j;

   wire b;
   wire c;
   wire d;
   wire e;
   wire f;
   wire g;
   wire h;
   wire j;

   my_dmux8way u1(b, c, d, e, f, g, h, j, a, sel);

   initial
     begin
	a = 1;
	sel = 3'b000;

	expected_b = 1;
	expected_c = 0;
	expected_d = 0;
	expected_e = 0;
	expected_f = 0;
	expected_g = 0;
	expected_h = 0;
	expected_j = 0;

	#1
	sel = 3'b001;
	expected_b = 0;
	expected_c = 1;
	expected_d = 0;
	expected_e = 0;
	expected_f = 0;
	expected_g = 0;
	expected_h = 0;
	expected_j = 0;

	#1
	sel = 3'b010;
	expected_b = 0;
	expected_c = 0;
	expected_d = 1;
	expected_e = 0;
	expected_f = 0;
	expected_g = 0;
	expected_h = 0;
	expected_j = 0;

	#1
	sel = 3'b011;
	expected_b = 0;
	expected_c = 0;
	expected_d = 0;
	expected_e = 1;
	expected_f = 0;
	expected_g = 0;
	expected_h = 0;
	expected_j = 0;

	#1
	sel = 3'b100;
	expected_b = 0;
	expected_c = 0;
	expected_d = 0;
	expected_e = 0;
	expected_f = 1;
	expected_g = 0;
	expected_h = 0;
	expected_j = 0;

	#1
	sel = 3'b101;
	expected_b = 0;
	expected_c = 0;
	expected_d = 0;
	expected_e = 0;
	expected_f = 0;
	expected_g = 1;
	expected_h = 0;
	expected_j = 0;
	
	#1
	sel = 3'b110;
	expected_b = 0;
	expected_c = 0;
	expected_d = 0;
	expected_e = 0;
	expected_f = 0;
	expected_g = 0;
	expected_h = 1;
	expected_j = 0;
	
	#1
	sel = 3'b111;
	expected_b = 0;
	expected_c = 0;
	expected_d = 0;
	expected_e = 0;
	expected_f = 0;
	expected_g = 0;
	expected_h = 0;
	expected_j = 1;
     end

   initial
     $monitor("my_dmux8way %d %b %b (%b %b) (%b %b) (%b %b) (%b %b) (%b %b) (%b %b) (%b %b) (%b %b)", $time, a, sel, b, expected_b, c, expected_c, d, expected_d, e, expected_e, f, expected_f, g, expected_g, h, expected_h, j, expected_j);
  
endmodule
