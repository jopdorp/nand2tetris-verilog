`include "not_n2t.sv"

module not_16(input[15:0] out, input[15:0] in);
    generate
	genvar i;
	for (i=0; i<=15; i=i+1) begin
	    not_n2t not_n2t(out[i], in[i]);
	end
    endgenerate
endmodule
