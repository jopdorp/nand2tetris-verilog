module Keyboard(
	input clk,
	input [10:0] ps2_key,
	output reg [7:0] hack_scancode
);

	reg ps2_changed;
	reg ps2_released;
	reg old_state;

	always @(posedge clk) begin

		old_state <= ps2_key[10];
		
		ps2_changed <= (old_state != ps2_key[10]);
		ps2_released <= ~ps2_key[9];
		
		
		if(ps2_changed) begin
			casez(ps2_key[8:0])
				9'h?16: hack_scancode <= "1"; // 1
				9'h?1E: hack_scancode <= "2"; // 2
				9'h?26: hack_scancode <= "3"; // 3
				9'h?25: hack_scancode <= "4"; // 4
				9'h?2E: hack_scancode <= "5"; // 5
				9'h?36: hack_scancode <= "6"; // 6
				9'h?3D: hack_scancode <= "7"; // 7
				9'h?3E: hack_scancode <= "8"; // 8
				9'h?46: hack_scancode <= "9"; // 9
				9'h?45: hack_scancode <= "0"; // 0
				
				9'h?1C: hack_scancode <= "A"; // a
				9'h?32: hack_scancode <= "B"; // b
				9'h?21: hack_scancode <= "C"; // c
				9'h?23: hack_scancode <= "D"; // d
				9'h?24: hack_scancode <= "E"; // e
				9'h?2B: hack_scancode <= "F"; // f
				9'h?34: hack_scancode <= "G"; // g
				9'h?33: hack_scancode <= "H"; // h
				9'h?43: hack_scancode <= "I"; // i
				9'h?3B: hack_scancode <= "J"; // j
				9'h?42: hack_scancode <= "K"; // k
				9'h?4B: hack_scancode <= "L"; // l
				9'h?3A: hack_scancode <= "M"; // m
				9'h?31: hack_scancode <= "N"; // n
				9'h?44: hack_scancode <= "O"; // o
				9'h?4D: hack_scancode <= "P"; // p
				9'h?15: hack_scancode <= "Q"; // q
				9'h?2D: hack_scancode <= "R"; // r
				9'h?1B: hack_scancode <= "S"; // s
				9'h?2C: hack_scancode <= "T"; // t
				9'h?3C: hack_scancode <= "U"; // u
				9'h?2A: hack_scancode <= "V"; // v
				9'h?1D: hack_scancode <= "W"; // w
				9'h?22: hack_scancode <= "?"; // ?
				9'h?35: hack_scancode <= "Y"; // y
				9'h?1A: hack_scancode <= "Z"; // z
				
				9'h?29: hack_scancode <= " "; // space
				9'h?52: hack_scancode <= "'"; // quotation mark
				9'h?41: hack_scancode <= ","; // comma
				9'h?4C: hack_scancode <= ";"; // semicolon
				9'h?49: hack_scancode <= "."; // period
				9'h?4A: hack_scancode <= "/"; // slash
				9'h?54: hack_scancode <= "["; // left square bracket
				9'h?5B: hack_scancode <= "]"; // right square bracket
				9'h?5D: hack_scancode <= 8'd92; // backslash
				9'h?4E: hack_scancode <= "-"; // dash
				
				9'h?5A: hack_scancode <= 8'd128; // enter
				9'h?66: hack_scancode <= 8'd129; // backspace
				9'h?76: hack_scancode <= 8'd140; // escape
				9'h?05: hack_scancode <= 8'd141; // F1
				9'h?06: hack_scancode <= 8'd142; // F2
				9'h?04: hack_scancode <= 8'd143; // F3
				9'h?0C: hack_scancode <= 8'd144; // F4
				9'h?03: hack_scancode <= 8'd145; // F5
				9'h?0B: hack_scancode <= 8'd146; // F6
				9'h?83: hack_scancode <= 8'd147; // F7
				9'h?0A: hack_scancode <= 8'd148; // F8
				9'h?01: hack_scancode <= 8'd149; // F9
				9'h?09: hack_scancode <= 8'd150; // F10
				9'h?78: hack_scancode <= 8'd151; // F11
				9'h?07: hack_scancode <= 8'd152;  // F12
				
				
				9'h?79: hack_scancode <= "+"; // +
				9'h?7B: hack_scancode <= "-"; // -
				9'h?7C: hack_scancode <= "*"; // *
				9'h?55: hack_scancode <= "="; // =
				default: hack_scancode <= 8'd0;
			endcase
		end else if (ps2_released)
			hack_scancode <= 8'd0;
		else
			hack_scancode <= hack_scancode;
	end
endmodule
