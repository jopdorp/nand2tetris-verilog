`ifndef not_n2t
  `include "../01/not_n2t.sv"
`endif

`ifndef and_n2t
  `include "../01/and_n2t.sv"
`endif

`ifndef mux_16
  `include "../01/mux_16.sv"
`endif

module Memory(
  input[15:0] in, 
  input clock, load, 
  input[14:0] address, 
  output[15:0] out, 
  input [15:0] scancode
  );
  wire[15:0] outM, outS, outK, outSK;
  wire Sload, N14, Mload;

  not_n2t g1(address[14], N14);
  and_n2t g2(N14, load, Mload);
  and_n2t g3(address[14], load, Sload);
  
  ram_16K_optimized ram16k(in, address[13:0], Mload, clock, outM);
  screen_8K  screen(in, address[12:0], Sload, clock, outS);
  reg [15:0] keyboard;
  
  assign keyboard = scancode;
  
  mux_16 g4(outM, outSK, address[14], out);
  mux_16 g5(outS, outK,  address[13], outSK);
endmodule