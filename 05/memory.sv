`ifndef mux_16
  `include "../01/mux_16.sv"
`endif
`include "../03/ram_16K_optimized.sv"
`include "screen_8K.sv"

/**
 * The complete address space of the computer's memory,
 * including RAM and memory mapped I/O. 
 * The chip facilitates read and write operations, as follows:
 *     Read:  out(t) = Memory[address(t)](t)
 *     Write: If load(t-1) then Memory[address(t-1)](t) = in(t-1)
 * In words: the chip always outputs the value stored at the memory 
 * location specified by address. If load=1, the in value is loaded 
 * into the memory location specified by address. This value becomes 
 * available through the out output in the next time step.
 * Address space rules:
 * Only the upper 16K+8K+1 words of the Memory chip are used. 
 * Access to address>0x6000 is invalid. Access to any address in 
 * the range 0x4000-0x5FFF results in accessing the screen memory 
 * map. Access to address 0x6000 results in accessing the keyboard 
 * memory map. The behavior in these addresses is described in the 
 * Screen and Keyboard chip specifications given in the book.
 */
 
module memory(input[15:0] in, input clock, load, input[14:0] address, output[15:0] out);
  reg [15:0] scancode /*verilator public*/;

    // Put your code here

endmodule