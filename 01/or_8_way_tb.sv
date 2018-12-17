module or_8_way_tb();
   reg [7:0] a;
   reg 	     expected;
   wire      b;

   or_8_way u1(b, a);
   
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
     $monitor("or_8_way %d %b (%b %b)", $time, a, b, expected);
   
endmodule
