`include "and_n2t.sv"

module and_n2t_tb();
    reg a;
    reg b;
    reg expected;
    
    wire out;

    and_n2t tested_intance(out, a, b);

    initial 
      begin
	  a = 0;
	  b = 0;
	  expected = 0;
	  assert (expected == out);
	  #10 a = 0;
	  b = 1;
	  expected = 0;
	  assert (expected == out);
	  #10 a = 1;
	  b = 0;
	  expected = 0;
	  assert (expected == out);
	  #10 a = 1;
	  b = 1;
	  expected = 1;
	  assert (expected == out);
      end

endmodule
