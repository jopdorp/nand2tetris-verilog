#!/usr/local/bin/python3.6

import os
import re
import sys
from subprocess import check_output, call, CalledProcessError, run, Popen, PIPE
from multiprocessing.pool import ThreadPool


class bcolors:
    OKBLUE = '\033[94m'
    OKGREEN = '\033[92m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'


class TestBenchRunner(object):
    def __init__(self, filename):
        self.name = filename


def simulate(filename):
    simulation_command = ["vsim", "-c"]
    simulation_command.append(filename[0:-3])
    simulation_command = simulation_command + ["-do", "run 2000", "-do", "quit"]

    try:
        output = check_output(simulation_command).decode("utf-8")
        assertion_errors = len(re.findall(r'Error: ', output))
        print(output)
        color = bcolors.FAIL if assertion_errors > 0 else bcolors.OKGREEN
        print(color + "Found", assertion_errors, "assertion errors", "in", filename, bcolors.ENDC, "\n")
        return {"assertion_errors": assertion_errors, "run_errors": 0}
    except CalledProcessError as e:
        return_code = e.returncode
        print(bcolors.FAIL + "Error while running", filename, return_code, bcolors.ENDC, "\n")
        return {"assertion_errors": 0, "run_errors": 1}


def summarise_results(results):
    [
        assertion_errors,
        run_errors,
        successful_test_benches,
        unsuccessful_test_benches,
        test_benches_with_assertion_errors
    ] = results
    color = bcolors.FAIL if unsuccessful_test_benches > 0 else bcolors.OKGREEN
    print(color + "Finished testing\n")
    print(bcolors.OKGREEN + str(successful_test_benches), "test benches ran without any errors")
    if unsuccessful_test_benches > 0:
        print(bcolors.FAIL + str(unsuccessful_test_benches), "test benches had errors, of which:",
              "\n" + str(test_benches_with_assertion_errors), "ran, but had a total of ", assertion_errors,
              "assertion errors")
    if run_errors > 0:
        "\n" + str(run_errors), "testbenches failed to run", bcolors.ENDC


def run_tests():
    assertion_errors = 0
    run_errors = 0
    successful_test_benches = 0
    unsuccessful_test_benches = 0
    test_benches_with_assertion_errors = 0
    pool = ThreadPool(processes=8)
    async_results = [pool.apply_async(simulate, (filename,)) for filename in test_files]
    for result in async_results:
        errors = result.get()
        assertion_errors += errors["assertion_errors"]
        run_errors += errors["run_errors"]

        if errors["assertion_errors"] > 0:
            test_benches_with_assertion_errors += 1

        if errors["run_errors"] > 0 or errors["assertion_errors"] > 0:
            unsuccessful_test_benches += 1
        else:
            successful_test_benches += 1
    return [
        assertion_errors,
        run_errors,
        successful_test_benches,
        unsuccessful_test_benches,
        test_benches_with_assertion_errors
    ]

if __name__ == '__main__':
    os.chdir(sys.argv[1])
    [verilog_files, test_files] = [[],[]] if len(sys.argv) <= 2 else [[sys.argv[2]], [sys.argv[2]]]

    if len(verilog_files) == 0:
        verilog_files = [f for f in os.listdir("./") if re.search(r'.*\.sv$', f)]
        test_files = [f for f in os.listdir("./") if re.search(r'.*_tb\.sv$', f)]

    call(["vlib", "work"])

    compile_command = ["vlog"]
    for filename in verilog_files:
        compile_command.append(filename)

    output = Popen(" ".join(compile_command), stdout=PIPE, shell=True)
    output = output.communicate()[0].decode("utf-8")

    if re.search(r'Error:', output):
        raise Exception("Aborting, there were compilation errors!\n\n" + output)
    else:
        print(bcolors.OKBLUE+"Finished compiling", compile_command, bcolors.ENDC, "\n")

    summarise_results(run_tests())
