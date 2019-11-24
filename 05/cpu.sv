`include "../02/alu_optimized.sv"
`include "../03/pc.sv"
`ifndef and_16
  `include "../01/and_16.sv"
`endif

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

    // alu
    wire [15:0] second_alu_input_value;
    mux_16 select_m_or_a(addressM, inM, instruction[12], second_alu_input_value);

    wire [15:0] d_register_out;
    wire alu_out_is_zero;
    wire alu_out_is_negative;
    alu_optimized calculations(
        d_register_out, 
        second_alu_input_value, 
        instruction[11],
        instruction[10],
        instruction[9],
        instruction[8],
        instruction[7],
        instruction[6],
        outM, 
        alu_out_is_zero, 
        alu_out_is_negative
    );

    // a register
    wire should_load_address_into_a_register;
    not_n2t not_opcode(instruction[15], should_load_address_into_a_register);

    wire [15:0] address_from_a_instruction;
    and_16 instruction_to_address(instruction, 16'b0111111111111111, address_from_a_instruction);

    wire [15:0] value_for_a_register;
    mux_16 choose_address_source(address_from_a_instruction, outM, instruction[15], value_for_a_register);

    wire should_load_a_register;
    or_n2t instruction_or_alu_into_a(instruction[5], should_load_address_into_a_register, should_load_a_register);

    wire not_clock;
    not_n2t clock_not(clock, not_clock);
    register_n2t a_register(value_for_a_register, should_load_a_register, not_clock, addressM);

    // d register
    wire should_load_d_register;
    and_n2t c_instruction_and_dest_d(instruction[15], instruction[4], should_load_d_register);

    register_n2t d_register(outM, should_load_d_register, clock, d_register_out);

    // m
    and_n2t should_write_m(instruction[15], instruction[3], writeM);

    // pc

    // jump logic
    wire jeq;
    and_n2t jump_is_zero(alu_out_is_zero, instruction[1], jeq);
    wire jlt;
    and_n2t jump_is_negative(alu_out_is_negative, instruction[2], jlt);
    wire zeroOrNeg;
    or_n2t is_zero_or_neg(alu_out_is_zero, alu_out_is_negative, zeroOrNeg);
    wire positive;
    not_n2t is_positive(zeroOrNeg, positive);
    wire jgt;
    and_n2t jump_if_positive(positive, instruction[0], jgt);
    wire jle;
    or_n2t jump_if_negative(jeq, jlt, jle);
    wire jumpToA;
    or_n2t should_jump_to_a(jle, jgt, jumpToA);
    wire PCload;
    and_n2t jump_if_c_instruction(instruction[15], jumpToA, PCload);
    wire inc;
    not_n2t should_inc(PCload, inc);
    pc program_counter(addressM, PCload, inc, reset, not_clock, pc);

endmodule
