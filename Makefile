.SUFFIXES: .v .out .txt

LOGIC_DIR = logic
ARITH_DIR = arith
BUILD_DIR = build

LOGIC_TESTS != ls $(LOGIC_DIR)/test*.v
ARITH_TESTS != ls $(ARITH_DIR)/test*.v

LOGIC_TEST_RESULTS_INDIVIDUAL != echo $(LOGIC_TESTS) | sed 's/.v/.txt/g'
ARITH_TEST_RESULTS_INDIVIDUAL != echo $(ARITH_TESTS) | sed 's/.v/.txt/g'

LOGIC_RESULTS = logic_results.txt
ARITH_RESULTS = arith_results.txt

TEST_RESULTS = $(LOGIC_RESULTS) $(ARITH_RESULTS)

.v.out:
	iverilog -y $(LOGIC_DIR) -y $(ARITH_DIR) -o $@ $<

.out.txt:
	./$< > $@

$(LOGIC_RESULTS): $(LOGIC_TEST_RESULTS_INDIVIDUAL)
	cat $? > $(LOGIC_RESULTS)

$(ARITH_RESULTS): $(ARITH_TEST_RESULTS_INDIVIDUAL)
	cat $? > $(ARITH_RESULTS)

test_logic: $(LOGIC_RESULTS)
	./valid.pl $(LOGIC_RESULTS)

test_arith: $(ARITH_RESULTS)
	./valid.pl $(ARITH_RESULTS)

clean:
	rm *.txt
	rm *.out
