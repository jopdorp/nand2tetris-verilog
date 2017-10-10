`include "my_or8way.v"

module test_my_or8way();
   reg [7:0] a;
   reg 	     expected;
   wire      b;

   my_or8way u1(b, a);
   
   initial 
     begin
	a = 8'b00000000;
	expected = 0;

	#1 
	a = 8'b00000001;
	expected = 1;

	#1
	a = 8'b00000000;
	expected = 0;

	#1 
	a = 8'b00000010;
	expected = 1;

	#1 
        a = 8'b11111111;
	expected = 1;
     end

   initial
     $monitor("my_or8way %d %b (%b %b)", $time, a, b, expected);
   
endmodule
