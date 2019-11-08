module cpu_ported(
    input  [15:0] inM,
    input  [15:0] instruction,
    input         reset,
    input         clock,
    output [15:0] outM,
    output        writeM,
    output [14:0] addressM,
    output [14:0] pc
);
    wire ni;
	not_n2t not_opcode(instruction[15],ni);

    wire [15:0] i;
	mux_16 mux_i(outM,instruction,ni,i);

    wire intoA;
	or_n2t ni_or_instruction(ni,instruction[5],intoA);

    wire [15:0] A;
    assign addressM = A[14:0];
	register a_reg(i,intoA,clock, A);

    wire AorM;
	and_n2t jaja_and(instruction[15],instruction[12],AorM);
	wire [15:0] AM;
    mux_16 muxie(A,inM,AorM,AM);
	
    wire zr, ng;
    wire [15:0] D;
	alu de_alu(D,AM,instruction[11],instruction[10],instruction[9],instruction[8],instruction[7],instruction[6],outM,zr,ng);

    wire intoD;
	and_n2t nog_andje(instruction[15],instruction[4],intoD);
	register d_reg(outM,intoD,clock, D);

	and_n2t die_and(instruction[15],instruction[3],writeM);

    wire pos;
	not_n2t not_ng(ng,pos);
	wire nzr;
    not_n2t not_zr(zr,nzr);
    wire jgt;
	and_n2t jgt_and(instruction[15],instruction[0],jgt);
	wire posnzr;
    and_n2t posnzr_and(pos,nzr,posnzr);
    wire ld1;
    and_n2t ld1_and(jgt,posnzr,ld1);
    wire jeq;
	and_n2t jeq_and(instruction[15],instruction[1],jeq);
    wire ld2;
	and_n2t ld2_and(jeq,zr,ld2);
    wire jlt;
	and_n2t jlt_and(instruction[15],instruction[2],jlt);
    wire ld3;
	and_n2t ld3_and(jlt,ng,ld3);

    wire ldt;
	or_n2t ldt_or(ld1,ld2,ldt);
    wire ld;
	or_n2t ld_or(ld3,ldt,ld);

    wire [15:0] pcOut;
    assign pc = pcOut[14:0];
	pc program_counter(A,ld,1'b1,reset,clock,pcOut);

endmodule
