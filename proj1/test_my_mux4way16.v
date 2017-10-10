`include "my_mux4way16.v"

module test_my_mux4way16();
   reg [15:0] a;
   reg [15:0] b;
   reg [15:0] c;
   reg [15:0] d;
   reg [1:0] s;
   reg [15:0] expected;
   
   wire [15:0] e;

   my_mux4way16 u1(e, a, b, c, d, s);

   initial 
     begin
	a = 16'b0101010101010101;
	b = 16'b1010101010101010;
	c = 16'b0000000011111111;
	d = 16'b1111111100000000;
	s = 2'b00;
	
	expected = 16'b0101010101010101;

	#1 
        s = 2'b01;
	expected = 16'b1010101010101010;

	#1
        s = 2'b10;
	expected = 16'b0000000011111111;

	#1
        s = 2'b11;
	expected = 16'b1111111100000000;
     end

   initial
     $monitor("my_mux16 %d %b %b %b %b %b (%b %b)", $time, a, b, c, d, s, e, expected);
   
endmodule
