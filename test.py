#!/usr/bin/env python3

import os
import re
import sys
from subprocess import check_output, CalledProcessError, Popen, PIPE
from multiprocessing.pool import ThreadPool
import glob
import colorama
from colorama import Fore, Style


class TestBenchRunner(object):
    def __init__(self, filename):
        self.name = filename

def compile(filename):
    output = Popen(" ".join(["vlog","-work","../work",filename]), stdout=PIPE, shell=True)
    output = output.communicate()[0].decode("utf-8")

    if re.search(r'(Error:|Error )', output):
        print(Fore.RED+"There were compilation errors!\n\n" + output)
    else:
        warnings = re.findall(r'Warning:.*\n.*\n.*\n', output)
        if len(warnings) > 0:
            print(Fore.YELLOW)
            print("\n".join(warnings))

def simulate(filename):
    simulation_command = ["vsim", "-c","-work","../work"]
    simulation_command.append(filename[0:-3])
    simulation_command = simulation_command + ["-do", "run 2000", "-do", "quit"]

    try:
        output = check_output(simulation_command).decode("utf-8")
        assertion_errors = len(re.findall(r'Error: ', output))
        print(output)
        color = Fore.RED if assertion_errors > 0 else Fore.GREEN
        print(color + "Found " + str(assertion_errors) + " assertion errors in " + filename + Style.RESET_ALL + "\n")
        return {"assertion_errors": assertion_errors, "run_errors": 0}
    except CalledProcessError as e:
        return_code = e.returncode
        print(Fore.RED + "Error while running " + filename + "\nError code: " + str(return_code) + "\n")
        print(e.output.decode("utf-8"))
        print(Style.RESET_ALL)
        return {"assertion_errors": 0, "run_errors": 1}


def summarise_results(results):
    [
        assertion_errors,
        run_errors,
        successful_test_benches,
        unsuccessful_test_benches,
        test_benches_with_assertion_errors
    ] = results
    color = Fore.RED if unsuccessful_test_benches > 0 else Fore.GREEN
    print(color + "\nFinished testing:\n")
    print(Fore.GREEN + str(successful_test_benches) + " test benches ran without any errors\n")

    if unsuccessful_test_benches > 0:
        print(Fore.RED + str(unsuccessful_test_benches) + " test benches had errors, of which:"
              + "\n" + str(test_benches_with_assertion_errors) + " ran, but had a total of "
              + str(assertion_errors) + " assertion errors")
    else:
        print(Fore.GREEN + "All tests succeeded!")

    if run_errors > 0:
        print(str(run_errors) + " testbenches failed to run" + Style.RESET_ALL)


def run_tests(project):
    print("Starting tests in project 0"+str(project))
    os.chdir(dir_path + "/0" + str(project))
    test_files = [] if len(sys.argv) <= 2 else [sys.argv[2]]
    if len(test_files) == 0:
        test_files = [f for f in os.listdir("./") if re.search(r'.*_tb\.sv$', f)]

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


def compile_and_run_simulations(project):
    # swallow the error if work already exists
    check_output(["vlib", "work"])

    for i in range(project+1):
        os.chdir(dir_path + "/0" + str(i))
        verilog_files = [f for f in os.listdir("./") if re.search(r'.*\.sv$', f)]
        print("\nStarting compilation of project