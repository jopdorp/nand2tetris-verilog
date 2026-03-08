`include "../02/alu_optimized.sv"
`include "../03/pc.sv"
`ifndef and_16
  `include "../01/and_16.sv"
`endif

/**
 * The Central Processing unit (CPU).
 * Consists of an ALU and a set of registers, designed to fetch and 
 * execute instructions written in the Hack machine language.
 * In particular, functions as follows:
 * Executes the inputted instruction according to the Hack machine 
 * language specification. The D and A in the language specification
 * refer to CPU-resident registers, while M refers to the external
 * memory location addressed by A, i.e. to Memory[A]. The inM input 
 * holds the value of this location. If the current instruction needs 
 * to write a value to M, the value is placed in outM, the address 
 * of the target location is placed in the addressM output, and the 
 * writeM control bit is asserted. (When writeM=0, any value may 
 * appear in outM). The outM and writeM outputs are combinational: 
 * they are affected instantaneously by the execution of the current 
 * instruction. The addressM and pc outputs are clocked: although they 
 * are affected by the execution of the current instruction, they commit 
 * to their new values only in the next time unit. If reset=1 then the 
 * CPU jumps to address 0 (i.e. sets pc=0 in next time unit) rather 
 * than to the address resulting from executing the current instruction. 
 */
 
module cpu(
    input  [15:0] inM,
    input  [15:0] instruction,
    input         reset,
    input         clock,
    output [15:0] outM,
    output        writeM,
    output [15:0] addressM,
    output [15:0] pc
);

    // Put your code here, hint: a register and pc use !clock

endmodule
