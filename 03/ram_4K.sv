`ifndef ram_512_optimized
    `include "ram_512_optimized.sv"
`endif
`ifndef mux_8_way_16
    `include "mux_8_way_16.sv"
`endif
`ifndef dmux_8_way
    `include "dmux_8_way.sv"
`endif
`define ram_4K

/**
 * Memory of 4K registers, each 16-bit wide.  
 * The chip facilitates read and write operations, as follows:
 *     Read:  out(t) = RAM4K[address(t)](t)
 *     Write: If load(t-1) then RAM4K[address(t-1)](t) = in(t-1)
 * In words: the chip always outputs the value stored at the memory 
 * location specified by address. If load == 1, the in value is loaded 
 * into the memory location specified by address.  This value becomes 
 * available through the out output starting from the next time step.
 */
 
module ram_4K(
    input  [15:0] in,
    input  [11:0]  address,
    input         load,
    input         clock,
    output [15:0] out
);

    // Put your code here, use ram_512_optimized
    
endmodule
