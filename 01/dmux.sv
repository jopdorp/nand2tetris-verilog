`ifndef and_n2t
  `include "and_n2t.sv"
`endif
`define dmux 1

/**
 * Dmultiplexor.  
 * {a,b} = {in,0} if sel==0
 *         {0,in} if sel==1
 */

module dmux(
    input  in,
    input  select,
    output a,
    output b
);

    // Put your code here

endmodule
