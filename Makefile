.SUFFIXES: .v .out .txt

LOGIC_DIR = logic
ARITH_DIR = arith
SEQ_DIR = seq

BUILD_DIR = build

LOGIC_TESTS != ls $(LOGIC_DIR)/test*.v
ARITH_TESTS != ls $(ARITH_DIR)/test*.v
SEQ_TESTS != ls $(SEQ_DIR)/test*.v

LOGIC_TEST_RESULTS_INDIVIDUAL != echo $(LOGIC_TESTS) | sed 's/.v/.txt/g'
ARITH_TEST_RESULTS_INDIVIDUAL != echo $(ARITH_TESTS) | sed 's/.v/.txt/g'
SEQ_TEST_RESULTS_INDIVIDUAL != echo $(SEQ_TESTS) | sed 's/.v/.txt/g'

LOGIC_RESULTS = logic_results.txt
ARITH_RESULTS = arith_results.txt
SEQ_RESULTS = seq_results.txt
ALL_RESULTS = results.txt

TEST_RESULTS = $(LOGIC_RESULTS) $(ARITH_RESULTS) $(SEQ_RESULTS)

.v.out:
	iverilog -y $(LOGIC_DIR) -y $(ARITH_DIR)  -y $(SEQ_DIR) -o $@ $<

.out.txt:
	./$< > $@

$(LOGIC_RESULTS): $(LOGIC_TEST_RESULTS_INDIVIDUAL)
	cat $? > $(LOGIC_RESULTS)

$(ARITH_RESULTS): $(ARITH_TEST_RESULTS_INDIVIDUAL)
	cat $? > $(ARITH_RESULTS)

$(SEQ_RESULTS): $(SEQ_TEST_RESULTS_INDIVIDUAL)
	cat $? > $(SEQ_RESULTS)

$(ALL_RESULTS): $(TEST_RESULTS)
	cat $? > $(ALL_RESULTS)

test_logic: $(LOGIC_RESULTS)
	./valid.pl $(LOGIC_RESULTS)

test_arith: $(ARITH_RESULTS)
	./valid.pl $(ARITH_RESULTS)

test_seq: $(SEQ_RESULTS)
	./valid.pl $(SEQ_RESULTS)

test_all: $(ALL_RESULTS)
	./valid.pl $(ALL_RESULTS)

clean:
	- rm $(LOGIC_DIR)/*.txt
	- rm $(LOGIC_DIR)/*.out
	- rm $(ARITH_DIR)/*.txt
	- rm $(ARITH_DIR)/*.out
	- rm $(SEQ_DIR)/*.txt
	- rm $(SEQ_DIR)/*.out
	- rm $(LOGIC_RESULTS)
	- rm $(SEQ_RESULTS)
	- rm $(ARITH_RESULTS)
	- rm $(ALL_RESULTS)
