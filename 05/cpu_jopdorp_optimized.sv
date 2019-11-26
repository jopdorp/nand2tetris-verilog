`include "../02/alu_optimized.sv"

module cpu_jopdorp_optimized(
    input  [15:0] inM,
    input  [15:0] instruction,
    input         reset,
    input         clock,
    output [15:0] outM,
    output        writeM,
    output [14:0] addressM,
    output [14:0] pc
);

    reg[14:0] pc = 0;
    reg[15:0] a = 0;
    reg[15:0] d = 0;
    wire alu_out_is_zero;
    wire sel_am = instruction[12];
    wire[15:0] am = sel_am ? m : a;
    wire sel_a = instruction[15];
    wire load_a = !instruction[15] || instruction[5];
    wire load_d = instruction[15] && instruction[4];
    wire jump = (less_than_zero && instruction[2])
            || (alu_out_is_zero && instruction[1])
            || (greater_than_zero && instruction[0]);
    wire sel_pc = instruction[15] && jump;
    wire alu_out_is_negative;
    wire less_than_zero = alu_out_is_negative;
    wire greater_than_zero = !(less_than_zero || alu_out_is_zero);
    wire[14:0] next_pc = sel_pc ? a[14:0] : pc + 15'b1;
    wire[15:0] next_a = sel_a ? alu_out : {1'b0, instruction[14:0]};
    wire[15:0] next_d = alu_out;
    wire[15:0] alu_out;
    wire[15:0] m = inM;


    alu_optimized calculations(
        d, 
        am, 
        instruction[11],
        instruction[10],
        instruction[9],
        instruction[8],
        instruction[7],
        instruction[6],
        alu_out, 
        alu_out_is_zero, 
        alu_out_is_negative
    );

    // pc
    // jump logic
    assign addressM = a[14:0];
    assign outM = alu_out;
    assign writeM = instruction[15] && instruction[3];

    always @(negedge clock)
    if (reset)
        pc <= 15'b0;
    else
        pc <= next_pc;
        always @(negedge clock)
            if (load_a)
                a <= next_a;
    
    always @(posedge clock)
        if (load_d)
            d <= next_d;
    
endmodule
