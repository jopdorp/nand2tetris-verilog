#!/usr/bin/env python3

import os
import shutil
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

def compile(filename, project):
    project_dir = dir_path + "/0" + str(project) + "/"
    command = ["iverilog","-grelative-include","-g2012","-o ./build/"+filename+".vvp",project_dir + filename]
    command = " ".join(command)
    print(command)
    try:
        check_output(command, shell=True)
    except CalledProcessError as e:
        return_code = e.returncode
        print(Fore.YELLOW + "Error while compiling " + filename + "\nError code: " + str(return_code) + "\n")
        print(e.output.decode("utf-8"))
        print(Style.RESET_ALL)
        exit()

def simulate(filename):
    simulation_command = ["vvp",dir_path+"/build/"+filename]
    print(filename)
    try:
        output = check_output(simulation_command).decode("utf-8")
        assertion_errors = len(re.findall(r'(Error: |ERROR: )', output))
        print(output)
        color = Fore.YELLOW if assertion_errors > 0 else Fore.GREEN
        print(color + "Found " + str(assertion_errors) + " assertion errors in " + filename + Style.RESET_ALL + "\n")
        return {"assertion_errors": assertion_errors, "run_errors": 0}
    except CalledProcessError as e:
        return_code = e.returncode
        print(Fore.YELLOW + "Error while running " + filename + "\nError code: " + str(return_code) + "\n")
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
    color = Fore.YELLOW if unsuccessful_test_benches > 0 else Fore.GREEN
    print(color + "\nFinished testing:\n")
    print(Fore.BLUE + "From a total of " + str(successful_test_benches + unsuccessful_test_benches) + " test benches.\n")
    print(Fore.GREEN + str(successful_test_benches) + " test benches ran without any runtime errors\n")

    if unsuccessful_test_benches > 0:
        print(Fore.YELLOW + str(unsuccessful_test_benches) + " test benches had errors, of which:"
              + "\n" + str(test_benches_with_assertion_errors) + " ran, but had a total of "
              + str(assertion_errors) + " assertion errors")
    else:
        print(Fore.GREEN + "All tests succeeded!")

    if run_errors > 0:
        print(str(run_errors) + " testbenches failed to run" + Style.RESET_ALL)


def run_tests(project):
    print("Starting tests in project 0"+str(project))
    os.chdir(dir_path + "/build")
    test_files = [] if len(sys.argv) <= 2 else [sys.argv[2] + '.vvp']
    if len(test_files) == 0:
        test_files = [f for f in os.listdir("./") if re.search(r'.*_tb\.sv.vvp$', f)]

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
    if os.path.exists(dir_path + "/build"):
        shutil.rmtree(dir_path + "/build")
    os.mkdir(dir_path + "/build")
    project_dir = dir_path + "/0" + str(project)
    verilog_files = [] if len(sys.argv) <= 2 else [sys.argv[2]]
    if len(verilog_files) == 0:
        verilog_files = [f for f in os.listdir(project_dir) if re.search(r'.*\.sv$', f)]

    print("\nStarting compilation of project 0"+str(project)+"...")
    for file in verilog_files:
        compile(file, project)
    print(Fore.BLUE + "Finished compiling!\n" + Style.RESET_ALL)
    summarise_results(run_tests(project))
    shutil.rmtree(dir_path + "/build")


if __name__ == '__main__':
    colorama.init()
    dir_path = os.path.dirname(os.path.realpath(__file__))
    project = int(sys.argv[1])
    compile_and_run_simulations(project)

