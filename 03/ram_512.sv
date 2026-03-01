`ifndef ram_64
    `include "ram_64.sv"
`endif
`define ram_512 1

/**
 * Memory of 512 registers, each 16-bit wide.  
 * The chip facilitates read and write operations, as follows:
 *     Read:  out(t) = RAM512[address(t)](t)
 *     Write: If load(t-1) then RAM512[address(t-1)](t) = in(t-1)
 * In words: the chip always outputs the value stored at the memory 
 * location specified by address. If load == 1, the in value is loaded 
 * into the memory location specified by address.  This value becomes 
 * available through the out output starting from the next time step.
 */
 
module ram_512(
    input  [15:0] in,
    input  [8:0]  address,
    input         load,
    input         clock,
    output [15:0] out
);

    // Put your code here
    
endmodule
