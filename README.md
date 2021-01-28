# Nand2Tetris Verilog

### What is this about?
Nand2Tetris is an awesome course where you learn how to build a computer.  
You build the all chips and architecture from the ground up, in a simplified HDL language.  
After this, you create an assembler language, an operating system called Jack OS.  
Then a virtual machine and a java-like language called Jack.  

### Why this repo?
This is a SystemVerilog version of the course materials on hardware design.  
The purpose is usage by other students, so go ahead, give it a try!  
The course Nand2Tetris is on coursera https://www.coursera.org/learn/build-a-computer
There is also a website https://www.nand2tetris.org/  
I can also highly recommend the book from the course:  

**The Elements of Computing Systems**  
*Building a Modern Computer from First Principles*

This project is an implementation of the HACK architecture in SysytemVerilog.  
The there is a branch per week, with the solutions of previous weeks but not the current one.
Use this to implement the architecture yourself every week.  
For each chip, there is a testbench to test its functionctionality.  

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
- iverilog
- verilator

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
```console
$ cd nand2tetris-verilog
$ pip install -r requirements.txt
```
#### Iverilog: 
At the time this was writte, you need to buuld iverilog yourself beause we need new functionality which has not yet been released in a stable release.
For windows you will first need to install Msys2 64 bit which can be found here:
- https://sourceforge.net/projects/mingw-w64/files/External%20binary%20packages%20%28Win64%20hosted%29/MSYS%20%2832-bit%29/
- do the following to build and install iverilog:
for ubuntu install the prerequesites like this:

```console
$ sudo apt install flex bison gperf
```
then clone and build iverilog
```console
$ git clone https://github.com/steveicarus/iverilog.git
$ cd iverilog
$ sh autoconf.sh
$ ./configure
$ make
$ make install
```
#### Verilator: 
When you have implemented all chips, you can test the computer with verilator.
It will open a window and poll your keyboard, which are integrated with the provided screen chip and the keyboard register in the computer chip template.

Linux:
```console
$ sudo apt-get install -y verilator
```
Mac OS X:
```console
$ brew install verilator
```
Windows:
Open Msys2 64 bit
```console
$ pacman -S mingw-w64-x86_64-verilator
```
#### A note about editors  
There is an editor in the ModelSim graphical interface, but it's not the best.  
A good editor is vital for comfort during development.  
-   I recommend using VSCode from microsift, which has as nice system verilog plugin which it will suggest to isntall when you open a .sv file.

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
If you use windows, always yous your MSYS2 64 bit terminal.

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
iverilog -grelative-include -g2012 -o ./build/hello_verilog_tb.sv.vvp /c/dev/nand2tetris-verilog/00/hello_verilog_tb.sv
Finished compiling!

Starting tests in project 00
Hello world!

Found 0 assertion errors in hello_verilog_tb.sv.vvp


Finished testing:

From a total of 1 test benches.

1 test benches ran without any runtime errors

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
Starting compilation of project 01...
iverilog -grelative-include -g2012 -o ./build/not_n2t_tb.sv.vvp /c/dev/newnand/nand2tetris-verilog/01/not_n2t_tb.sv
Finished compiling!

Starting tests in project 01
not_n2t_tb.sv.vvp
ERROR: C:/dev/newnand/nand2tetris-verilog/01/not_n2t_tb.sv:12: assertion fail! in 0 out z, expected: 1
       Time: 1 Scope: not_n2t_tb.assert_else_error
ERROR: C:/dev/newnand/nand2tetris-verilog/01/not_n2t_tb.sv:12: assertion fail! in 1 out z, expected: 0
       Time: 3 Scope: not_n2t_tb.assert_else_error

Found 2 assertion errors in not_n2t_tb.sv.vvp


Finished testing:

From a total of 1 test benches.

0 test benches ran without any runtime errors

1 test benches had errors, of which:
1 ran, but had a total of 2 assertion errors
```

Implement the chip and rerun the test to see if it works!  
When you chip is correctly implemented you should see the following:

```console
$ python test.py 01 not_n2t_tb.sv

Starting compilation of project 01...
iverilog -grelative-include -g2012 -o ./build/not_n2t_tb.sv.vvp /c/dev/newnand/nand2tetris-verilog/01/not_n2t_tb.sv
Finished compiling!

Starting tests in project 01
not_n2t_tb.sv.vvp

Found 0 assertion errors in not_n2t_tb.sv.vvp


Finished testing:

From a total of 1 test benches.

1 test benches ran without any runtime errors

All tests succeeded!
```
### Thanks
- Thanks to Noam Nisan and Shimon Schocken for creating this awesome course!
- This repo was originally forked from https://github.com/f2xeb/n2t.  
Finding this repository convinced me that it was passible for me,  
someone with no experience in hardware design,  
to implement the HACK architecture in SystemVerilog.

### Cool links
#### Verilog learning material:
- https://www.nandland.com/verilog/tutorials/tutorial-introduction-to-verilog-for-beginners.html
- http://www.asic-world.com/verilog/veritut.html
#### nand2tetris stuff in (System)Verilog:
- https://github.com/f2xeb/n2t
- https://github.com/cbrooks90/Hack-cpu
- https://github.com/pbrit/hack-verilog
- https://github.com/ccckmit/nand2tetris_verilog
- https://nand2tetrisfpga.wordpress.com/category/uncategorized/
- https://hackaday.io/project/161283-nand2tetris-in-verilog-part4-pong-simulation
