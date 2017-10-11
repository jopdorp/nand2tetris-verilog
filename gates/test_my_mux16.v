`include "my_mux16.v"

module test_my_mux16();
   reg [15:0] a;
   reg [15:0] b;
   reg 	      s;
   reg [15:0] expected;
   
   wire [15:0] c;

   my_mux16 u1(c, a, b, s);

   initial 
     begin
	a = 16'b0101010101010101;
	b = 16'b1010101010101010;
	s = 0;
	
	expected = 16'b0101010101010101;

	#1 
        s = 1;
	expected = 16'b1010101010101010;
     end

   initial
     $monitor("my_mux16 %d %b %b %b (%b %b)", $time, a, b, s, c, expected);
   
endmodule
