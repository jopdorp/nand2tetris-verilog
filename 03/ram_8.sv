`ifndef and_n2t
    `include "../01/and_n2t.sv"
`endif
`ifndef dmux_8_way
    `include "../01/dmux_8_way.sv"
`endif
`ifndef mux_8_way_16
    `include "../01/mux_8_way_16.sv"
`endif
`ifndef register_n2t
    `include "register_n2t.sv"
`endif
`define ram_8 1

/**
 * Memory of 8 registers, each 16-bit wide.  
 * The chip facilitates read and write operations, as follows:
 *     Read:  out(t) = RAM8[address(t)](t)
 *     Write: If load(t-1) then RAM8[address(t-1)](t) = in(t-1)
 * In words: the chip always outputs the value stored at the memory 
 * location specified by address. If load == 1, the in value is loaded 
 * into the memory location specified by address.  This value becomes 
 * available through the out output starting from the next time step.
 */
 
module ram_8(
    input  [15:0] in,
    input  [2:0]  address,
    input         load,
    input         clock,
    output [15:0] out
);

    // Put your code here
    
endmodule
