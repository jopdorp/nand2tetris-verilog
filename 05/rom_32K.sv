`define rom_32K 1

module rom_32K(
    input  [14:0]  address,
    output [15:0] out
);
  /* verilator lint_off UNDRIVEN */
  reg[15:0] memory[0:2**15-1] /*verilator public*/;
  assign out = memory[address];  
endmodule