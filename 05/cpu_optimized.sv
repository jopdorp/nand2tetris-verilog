`include "../02/alu_optimized2.sv"

module cpu_optimized(
    input[15:0] rdata, 
    input[15:0] inst, 
    input nrst, 
    input clk, 
    output[15:0] wdata, 
    output we,
    output[15:0] data_addr, 
    output[15:0] inst_addr
    );
    
    reg[15:0] pc;
    reg[15:0] a;
    reg[15:0] d;
    
    alu_optimized2 alu0(.x(d), .y(am), .out(alu_out), .fn(alu_fn), .zero(zero));
    wire load_a = !inst[15] || inst[5];
    wire load_d = inst[15] && inst[4];
    wire sel_a = inst[15];
    wire sel_am = inst[12];
    wire jump = (less_than_zero && inst[2])
                || (zero && inst[1])
                || (greater_than_zero && inst[0]);
    wire sel_pc = inst[15] && jump;
    wire zero;
    wire less_than_zero = alu_out[15];
    wire greater_than_zero = !(less_than_zero || zero);
    wire[15:0] next_pc = sel_pc ? a[15:0] : pc + 16'b1;
    wire[15:0] next_a = sel_a ? alu_out : {1'b0, inst[14:0]};
    wire[15:0] next_d = alu_out;
    wire[15:0] am = sel_am ? m : a;
    wire[15:0] alu_out;
    wire[5:0] alu_fn = inst[11:6];
    wire[15:0] m = rdata;

    assign inst_addr = pc;
    assign data_addr = a[15:0];
    assign wdata = alu_out;
    assign we = inst[15] && inst[3];

    always @(posedge clk)
    if (!nrst)
        pc <= 16'b0;
    else
        pc <= next_pc;
        always @(posedge clk)
            if (load_a)
                a <= next_a;
    
    always @(posedge clk)
        if (load_d)
            d <= next_d;
endmodule