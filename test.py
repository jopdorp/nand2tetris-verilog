#!/usr/bin/env python3

import os
import shutil
import re
import sys
from subprocess import check_output, CalledProcessError
from concurrent.futures import ThreadPoolExecutor, as_completed
import glob
import colorama
from colorama import Fore, Style

class TestBenchRunner(object):
    def __init__(self, filename):
        self.name = filename

def compile_file(filename, project, build_dir, project_dir):
    """
    Compiles a Verilog file using iverilog.
    """
    command = [
        "iverilog",
        "-grelative-include",
        "-g2012",
        "-o",
        os.path.join(build_dir, f"{filename}.vvp"),
        os.path.join(project_dir, filename)
    ]
    command_str = " ".join(command)
    print(command_str)
    try:
        check_output(command_str, shell=True, stderr=sys.stderr)
    except CalledProcessError as e:
        return_code = e.returncode
        print(Fore.YELLOW + f"Error while compiling {filename}\nError code: {return_code}\n")
        print(e.output.decode("utf-8"))
        print(Style.RESET_ALL)
        sys.exit(1)

def simulate(filename):
    """
    Simulates a compiled Verilog test bench using vvp.
    Returns a dictionary with the number of assertion and run errors.
    """
    simulation_command = ["vvp", os.path.join(dir_path, "build", filename)]
    print(filename)
    try:
        output = check_output(simulation_command, stderr=subprocess.STDOUT).decode("utf-8")
        assertion_errors = len(re.findall(r'(Error: |ERROR: )', output))
        print(output)
        color = Fore.YELLOW if assertion_errors > 0 else Fore.GREEN
        print(color + f"Found {assertion_errors} assertion errors in {filename}" + Style.RESET_ALL + "\n")
        return {"assertion_errors": assertion_errors, "run_errors": 0}
    except CalledProcessError as e:
        return_code = e.returncode
        print(Fore.YELLOW + f"Error while running {filename}\nError code: {return_code}\n")
        print(e.output.decode("utf-8"))
        print(Style.RESET_ALL)
        return {"assertion_errors": 0, "run_errors": 1}

def summarise_results(results):
    """
    Summarizes the simulation results.
    """
    (
        assertion_errors,
        run_errors,
        successful_test_benches,
        unsuccessful_test_benches,
        test_benches_with_assertion_errors
    ) = results

    color = Fore.YELLOW if unsuccessful_test_benches > 0 else Fore.GREEN
    print(color + "\nFinished testing:\n")
    total_tests = successful_test_benches + unsuccessful_test_benches
    print(Fore.BLUE + f"From a total of {total_tests} test benches.\n")
    print(Fore.GREEN + f"{successful_test_benches} test benches ran without any runtime errors\n")

    if unsuccessful_test_benches > 0:
        print(Fore.YELLOW + f"{unsuccessful_test_benches} test benches had errors, of which:"
              + f"\n{test_benches_with_assertion_errors} ran, but had a total of "
              + f"{assertion_errors} assertion errors")
    else:
        print(Fore.GREEN + "All tests succeeded!")

    if run_errors > 0:
        print(Fore.YELLOW + f"{run_errors} test benches failed to run" + Style.RESET_ALL)
    else:
        print(Style.RESET_ALL)

def run_tests(project, build_dir, test_files):
    """
    Runs simulations on the compiled test benches using ThreadPoolExecutor.
    """
    print(f"Starting tests in project 0{project}")
    os.chdir(build_dir)

    assertion_errors = 0
    run_errors = 0
    successful_test_benches = 0
    unsuccessful_test_benches = 0
    test_benches_with_assertion_errors = 0

    with ThreadPoolExecutor(max_workers=8) as executor:
        future_to_file = {executor.submit(simulate, filename): filename for filename in test_files}
        for future in as_completed(future_to_file):
            errors = future.result()
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
    """
    Compiles Verilog files and runs simulations.
    """
    build_dir = os.path.join(dir_path, "build")
    if os.path.exists(build_dir):
        shutil.rmtree(build_dir)
    os.mkdir(build_dir)

    project_dir = os.path.join(dir_path, f"0{project}")
    verilog_files = []
    if len(sys.argv) > 2:
        verilog_files = [sys.argv[2]]
    if not verilog_files:
        verilog_files = [f for f in os.listdir(project_dir) if re.search(r'.*\.sv$', f)]

    print(f"\nStarting compilation of project 0{project}...")
    for file in verilog_files:
        compile_file(file, project, build_dir, project_dir)
    print(Fore.BLUE + "Finished compiling!\n" + Style.RESET_ALL)

    # Determine test files to run
    if len(sys.argv) > 2:
        test_files = [f"{sys.argv[2]}.vvp"]
    else:
        test_files = [f for f in os.listdir(build_dir) if re.search(r'.*_tb\.sv\.vvp$', f)]

    summarise_results(run_tests(project, build_dir, test_files))
    shutil.rmtree(build_dir)

if __name__ == '__main__':
    import subprocess  # Imported here to avoid potential issues with multiprocessing

    colorama.init(autoreset=True)
    dir_path = os.path.dirname(os.path.realpath(__file__))

    if len(sys.argv) < 2:
        print("Usage: python3 test.py <project_number> [test_file]")
        sys.exit(1)

    try:
        project = int(sys.argv[1])
    except ValueError:
        print("Project number must be an integer.")
        sys.exit(1)

    compile_and_run_simulations(project)
