`ifndef ram_8
    `include "ram_8.sv"
`endif
`define ram_64 1

/**
 * Memory of 64 registers, each 16-bit wide.  
 * The chip facilitates read and write operations, as follows:
 *     Read:  out(t) = RAM64[address(t)](t)
 *     Write: If load(t-1) then RAM64[address(t-1)](t) = in(t-1)
 * In words: the chip always outputs the value stored at the memory 
 * location specified by address. If load == 1, the in value is loaded 
 * into the memory location specified by address.  This value becomes 
 * available through the out output starting from the next time step.
 */
 
module ram_64(
    input  [15:0] in,
    input  [5:0]  address,
    input         load,
    input         clock,
    output [15:0] out
);

    // Put your code here
    
endmodule
