# Nand2Tetris Verilog

### What is this about?
Nand2Tetris is an awesome course where you learn how to build a computer.  
You build the all chips and architecture from the ground up, in a simplified HDL language.  
After this, you create an assembler language, an operating system called Jack OS.  
Then a virtual machine and a java-like language called Jack.  

### Why this repo?
This is a SystemVerilog version of the course materials on hardware design.  
The purpose of is usage by other students, so go ahead, give it a try!  
The course Nand2Tetris is on coursera https://www.coursera.org/learn/build-a-computer
There is also a website https://www.nand2tetris.org/  
I can also highly recommend the book from the course:  

**The Elements of Computing Systems**  
*Building a Modern Computer from First Principles*

This project is an implementation of the HACK architecture in SysytemVerilog.  
The no-solutions branch is meant for students to implement the architecture themselves.  
For each chip, there is a testbench to test its functionctionality.  

## Current state

Project 01 and 02 are entirely finished.
There are individual branches for each project, named project-00, project-01 etc.
If you use the branches, you'll be sure that the solutions of previous projects are correct.
03  don't have automated tests or solutions yet,  
but it can be verified by looking at the test outputs.  
Will update soon!

## Installation
So, you want to try to build hack in SystemVerilog!  

The first step is cloning thin repo, so open up your favorite terminal and type:
```console
$ git clone https://github.com/jopdorp/nand2tetris-verilog.git
```
I recommend using git, but if you don't want to use git, you can download this repository as a zip file!  
https://bitbucket.org/jopdorp/nand2tetris-verilog/downloads/  

### Requirements
- python
- ModelSim starter edition

#### Python:
If you don't already have python installed, you can install it as follows:

In Ubuntu you can do something like:
```console
$ sudo apt install python3.6
```
More info: https://docs.python-guide.org/starting/install3/linux/  

In Windows you usually would download the installer from  https://www.python.org/downloads/windows/  

Mac OS X:
```console
$ brew install python
```

### Python libraries
When you have python installed, you can:
```
$ cd nand2tetris-verilog
$ pip install -r requirements.txt
```
#### ModelSim:
This should work with any licensed edition of ModelSim  
You can get a free, licensed copy of ModelSim starter edition from Intel:  
http://fpgasoftware.intel.com/18.1/?edition=standard&download_manager=dlm3&product=modelsim_ae#tabs-2  
First you have to register, then you can download the ModelSim installer.  
Follow the instructions in the installer.  

#### Configuration:


Put the ModelSim bin directory and python in your PATH environment variable.   
I added to the bottom of ~/.zshrc, ~/.bashrc for bash and ~/.bash_profile for Mac OS X
```
export PATH="$PATH:/home/jegor/intelFPGA/18.1/modelsim_ase/bin"
```
Replace the the path with your modelsim installation location.

Windows 10 and Windows 8:
1. In Search, search for and then select: System (Control Panel)  
1. Click the Advanced system settings link.  
1. Click Environment Variables. In the section System Variables, find the PATH environment variable and select it. Click Edit. If the PATH environment variable does not exist, click New.  
1. In the Edit System Variable (or New System Variable) window, specify the value of the PATH environment variable. 
    For me the path to modelsim was C:\intelFPGA_pro\18.1\modelsim_ase\win32aloem
    Click OK. Close all remaining windows by clicking OK. 
1. Open a new command prompt or power shell


#### A note about editors  
There is an editor in the ModelSim graphical interface, but it's not the best.  
A good editor is vital for comfort during development.  
-   I recommend using IntelliJ Community edition which can be obtained here:  
    https://www.jetbrains.com/idea/download  
    You will need a verilog plugin:  
    https://plugins.jetbrains.com/plugin/10695-systemverilog  
    The above plugin might be paid when you read this

If you don't want a big program like that, there are other options:
-   Emacs https://www.gnu.org/software/emacs/download.html  
    You'll probably want to use my config:
    ```console
    $ git clone https://jopdorp@bitbucket.org/jopdorp/emacs-config.git ~/.emacs.d
    ```
-   Atom with apio, it can be a bit of a hassle to setup.
    - https://atom.io/
    - https://atom.io/packages/apio-ide
-   Notepad++, i did not try this myself. Only has Windows support.
    - https://notepad-plus-plus.org/download/
    - https://sourceforge.net/projects/nppverilog/  

There should also be plugins for vim and sublime text, but don't know the details about those.

## You're ready!

## Usage

The testbenches can be run using "test.py".  
1. It compiles all verilog files in the project
1. It runs the test benches, by default all files that end with "_tb.sv" in the project

To verify that your environment is up and running type:
```console
$ python test.py 00
```
You should see the following output:
```console
Starting compilation of project 00...
Finished compiling!

Starting tests in project 00
Reading pref.tcl

# 10.5b

# vsim -c hello_verilog_tb -do "run 2000" -do "quit" 
# Start time: 15:58:14 on Dec 18,2018
# Loading sv_std.std
# Loading ../work.hello_verilog_tb
# run 2000
# Hello world!
# quit
# End time: 15:58:14 on Dec 18,2018, Elapsed time: 0:00:00
# Errors: 0, Warnings: 0, Suppressed Warnings: 1

Found 0 assertion errors in hello_verilog_tb.sv


Finished testing:

1 test benches ran without any errors

All tests succeeded!
```
Note that there is `# Hello world!` before the script quits the simulator.  
If there are not errors and you see this message, it means everything is good to go!  
It could be that you'll see some error, please see the [Troubleshoot section](#troubleshooting)

Now you can implement your first chip.  
I advise to start with not_n2t.sv, you can test it as follows:  
```console
$ python test.py 01 not_n2t_tb.sv
```
This should give you an assertion error:

```console
Starting compilation...
Finished compiling!

Reading pref.tcl

# 10.5b

# vsim -c not_n2t_tb -do "run 2000" -do "quit" 
# Start time: 12:55:04 on Dec 18,2018
# Loading sv_std.std
# Loading work.not_n2t_tb
# Loading work.not_n2t
# run 2000
# ** Error: Assertion error.
#    Time: 1 ps  Scope: not_n2t_tb File: not_n2t_tb.sv Line: 10
# ** Error: Assertion error.
#    Time: 3 ps  Scope: not_n2t_tb File: not_n2t_tb.sv Line: 12
# quit
# End time: 12:55:04 on Dec 18,2018, Elapsed time: 0:00:00
# Errors: 2, Warnings: 0, Suppressed Warnings: 1

Found 2 assertion errors in not_n2t_tb.sv


Finished testing:

0 test benches ran without any errors

1 test benches had errors, of which:
1 ran, but had a total of 2 assertion errors

```

Implement the chip and rerun the test to see if it works!  
When you chip is correctly implemented you should see the following:

```console
Starting compilation...
Finished compiling!

Reading pref.tcl

# 10.5b

# vsim -c not_n2t_tb -do "run 2000" -do "quit" 
# Start time: 12:57:45 on Dec 18,2018
# Loading sv_std.std
# Loading work.not_n2t_tb
# Loading work.not_n2t
# run 2000
# quit
# End time: 12:57:46 on Dec 18,2018, Elapsed time: 0:00:01
# Errors: 0, Warnings: 0, Suppressed Warnings: 1

Found 0 assertion errors in not_n2t_tb.sv


Finished testing:

1 test benches ran without any errors

All tests succeeded!
```
## Troubleshooting

#### Linux:

-   When installing in Ubuntu, you might encounter some problems.
    This link should have most, if not all, solutions:  
    https://gist.github.com/PrieureDeSion/e2c0945cc78006b00d4206846bdb7657  

-   It's not really needed to use the gui, but if the editor in modelsim is showing a really small font:  
    https://stackoverflow.com/questions/31555431/the-font-of-my-modelsim-is-too-small-to-see  
    This is the answer I found:
    1. Open ~/.modelsim (use "nano ~/.modelsim" in terminal)
    1. Find: PrefDefault = ... textFontV2 {{Courier 10 Pitch} 12 normal roman} (the name of the font may differ)
    1. Change 12 to -12, so it will looks like this: textFontV2 {{Courier 10 Pitch} -12 normal roman} 
    1. Save ~/.modelsim (Ctrl+O and then Enter)
    1. Reopen modelsim

-   When starting a simulation in vsim, it will always issue the following warning:   

    `Warning: (vsim-3116) Problem reading symbols from linux-gate.so.1 : can not open ELF file.`

    This seems to be related to this GDB bug report.  
    The warning is harmless, as linux-gate.so.1 does not really exist.  
    It is an interface provided by the Linux kernel to load ELF files.  
    A better method to fix this issue batch modelsim.ini located in the modelsim installation directory.  
    Use the following command:
    ```
    $ sudo nano modelsim.ini
    ```

    Go to the bottom of the file and find `[msg_system]` add `suppress = 3116`:
    ```
    [msg_system]
    suppress = 3116
    ```

### Thanks
- Thanks to Noam Nisan and Shimon Schocken for creating this awesome course!
- This repo was originally forked from https://github.com/f2xeb/n2t.  
Finding this repository convinced me that it was passible for me,  
someone with no experience in hardware design,  
to implement the HACK architecture in SystemVerilog.

### Cool links
####Verilog learning material:
- https://www.nandland.com/verilog/tutorials/tutorial-introduction-to-verilog-for-beginners.html
- http://www.asic-world.com/verilog/veritut.html
#### nand2tetris stuff in (System)Verilog:
- https://github.com/f2xeb/n2t
- https://github.com/cbrooks90/Hack-cpu
- https://github.com/pbrit/hack-verilog
- https://github.com/ccckmit/nand2tetris_verilog
- https://nand2tetrisfpga.wordpress.com/category/uncategorized/
- https://hackaday.io/project/161283-nand2tetris-in-verilog-part4-pong-simulation