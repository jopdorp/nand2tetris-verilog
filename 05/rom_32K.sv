`define rom_32K 1

module rom_32K(
    input  [14:0]  address,
    output [15:0] out
);
  reg[15:0] memory[0:2**15-1];
  initial begin
      $readmemb("../Fill.hack", memory);
  end
  assign out = memory[address];  
endmodule