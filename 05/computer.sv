`include "./cpu_jopdorp_optimized.sv"
`include "rom_32K.sv"
`include "memory.sv"

`define computer 1

/**
 * The HACK computer, including CPU, ROM and RAM.
 * When reset is 0, the program stored in the computer's ROM executes.
 * When reset is 1, the execution of the program restarts. 
 * Thus, to start a program's execution, reset must be pushed "up" (1)
 * and "down" (0). From this point onward the user is at the mercy of 
 * the software. In particular, depending on the program's code, the 
 * screen may show some output and the user may be able to interact 
 * with the computer via the keyboard.
 */
 
module computer(
    input  reset,
    input clock
);

  // Put your code here, hint: memory uses !clock.
  // memory must be named memory, it has integration in the verilator compile script: memory memory(...
  // rom_32K must be named rom, it has integration in the verilator compile script: rom_32K rom(...

endmodule