.SUFFIXES: .v .out .txt
TEST_RESULTS=test_my_not.txt test_my_and.txt test_my_or.txt test_my_xor.txt test_my_mux.txt test_my_dmux.txt test_my_not16.txt test_my_and16.txt test_my_or16.txt test_my_mux16.txt test_my_or8way.txt test_my_mux4way16.txt test_my_mux8way16.txt test_my_dmux4way.txt test_my_dmux8way.txt
RESULT_FILE=results.txt

.v.out:
	iverilog -o $@ $<

.out.txt:
	./$< > $@

results.txt: $(TEST_RESULTS)
	cat $? > $(RESULT_FILE)

test: $(RESULT_FILE)
	./valid.pl $(RESULT_FILE)

clean:
	rm *.txt
	rm *.out
