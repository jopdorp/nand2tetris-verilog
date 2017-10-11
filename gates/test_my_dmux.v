`include "my_dmux.v"

module test_my_dmux();
   reg i;
   reg s;
   reg expected_a;
   reg expected_b;
   
   wire a;
   wire b;

   my_dmux u1(a, b, i, s);

   initial 
     begin
	i = 0;
	s = 0;
	expected_a = 0;
	expected_b = 0;

	#1 
	i = 0;
	s = 1;
	expected_a = 0;
	expected_b = 0;


	#1 
	i = 1;
	s = 0;
	expected_a = 1;
	expected_b = 0;


	#1 
	i = 1;
	s = 1;
	expected_a = 0;
	expected_b = 1;
     end

   initial
     $monitor("my_dmux %d %b %b (%b %b) (%b %b)", $time, i, s, a, expected_a, b, expected_b);
   
endmodule
