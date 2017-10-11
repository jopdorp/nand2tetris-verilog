module test_my_xor();
   reg a;
   reg b;
   reg expected;
   
   wire c;

   my_xor u1(c, a, b);

   initial 
     begin
	a = 0;
	b = 0;
	expected = 0;

	#1 a = 0;
	b = 1;
	expected = 1;
	
	#1 a = 1;
	b = 0;
	expected = 1;
	
	#1 a = 1;
	b = 1;
	expected = 0;
     end

   initial
     $monitor("my_xor %d %b %b (%b %b)", $time, a, b, c, expected);
   
endmodule
