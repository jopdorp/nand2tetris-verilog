`include "my_mux8way16.v"

module test_my_mux8way16();
   reg [15:0] a;
   reg [15:0] b;
   reg [15:0] c;
   reg [15:0] d;
   reg [15:0] e;
   reg [15:0] f;
   reg [15:0] g;
   reg [15:0] h;
   reg [2:0]  sel;
   reg [15:0] expected;
   
   wire [15:0] j;

   my_mux8way16 u1(j, a, b, c, d, e, f, g, h, sel);

   initial 
     begin
	a = 16'b0101010101010101;
	b = 16'b1010101010101010;
	c = 16'b0000000011111111;
	d = 16'b1111111100000000;
	e = 16'b0011001100110011;
	f = 16'b1100110011001100;
	g = 16'b0000111100001111;
	h = 16'b1111000011110000;
	sel = 3'b000;
	
	expected = 16'b0101010101010101;

	#1 
        sel = 3'b001;
	expected = 16'b1010101010101010;

	#1
        sel = 3'b010;
	expected = 16'b0000000011111111;

	#1
        sel = 3'b011;
	expected = 16'b1111111100000000;

	#1
        sel = 3'b100;
	expected = 16'b0011001100110011;

	#1
        sel = 3'b101;
	expected = 16'b1100110011001100;

	#1
        sel = 3'b110;
	expected = 16'b0000111100001111;

	#1
        sel = 3'b111;
	expected = 16'b1111000011110000;
     end

   initial
     $monitor("my_mux8way16 %d %b %b %b %b %b %b %b %b %b (%b %b)", $time, a, b, c, d, e, f, g, h, sel, j, expected);
   
endmodule
