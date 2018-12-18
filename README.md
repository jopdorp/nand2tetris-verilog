#nand2tetris verilog

### What is this about?
nand2tetris is an awesome course where you learn how to build a computer.  
You build the all chips and architecture from the ground up, in a simplified HDL language.  
After this, you create an assembler language, an operating system called Jack OS.  
Then a virtual machine and a java-like language called Jack.  

### Why this repo?
This is a SystemVerilog version of the course materials on hardware design.  
The purpose of is usage by other students, so go ahead, give it a try!  
The course nand2tetris is on coursera https://www.coursera.org/learn/nand2tetris2  
There is also a website https://www.nand2tetris.org/  
I can also highly recommend the book from the course:  

**The Elements of Computing Systems**  
*Building a Modern Computer from First Principles*

This project is an implementation of the HACK architecture in SysytemVerilog.  
The no-solutions branch is meant for students to implement the architecture themselves.  
For each chip, there is a testbench to test its functionctionality.  

## Current state
Need to clean up a bit, the no-solutions branch has outdated skeleton files, and no test framework.  
Not all the solutions are ready either. Will update soon!
## Installation
So, you want to try to build hack in SystemVerilog!  
I hope that you'll have an easy time getting your environment up and running, it took me three days :p.  
Hopefully it'll be a matter of an hour or so.  
Please message me if you encounter any problems during your install,  
especially if you managed to solve them! Then I'll add the solution here.
```console
git clone --single-branch  --branch no-solutions https://jopdorp@bitbucket.org/jopdorp/nand2tetris-verilog.git
```
### Requirements
- python
- ModelSim starter edition
#### Python:
Many operating systems come with python preinstalled.  
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
#### ModelSim:
This should work with any licensed edition of ModelSim  
You can get a free, licensed copy of ModelSim starter edition from Intel:  
http://fpgasoftware.intel.com/18.1/?edition=standard&download_manager=dlm3&product=modelsim_ae#tabs-2  
First you have to register, then you can download the ModelSim installer.

Windows:  
In windows the installation is very easy, just follow the instructions in the installer.

Mac OS X:  
Should be just following the installer, same as Windows.

Linux:  
Redhat should be easy, but if you are using another distro.
For example Ubuntu, there can be some problems, see the troubleshooting section.  

#### Configuration:

Put the ModelSim bin directory on your PATH environment variable.   
I added to the bottom of ~/.zshrc, ~/.bashrc for bash and ~/.bash_profile for Mac OS X
```
export PATH="$PATH:/home/jegor/intelFPGA/18.1/modelsim_ase/bin"
```
Replace the the path with your modelsim installation location.

Windows 10 and Windows 8:
1. In Search, search for and then select: System (Control Panel)  
1. Click the Advanced system settings link.  
1. Click Environment Variables. In the section System Variables, find the PATH environment variable and select it. Click Edit. If the PATH environment variable does not exist, click New.  
1. In the Edit System Variable (or New System Variable) window, specify the value of the PATH environment variable. Click OK. Close all remaining windows by clicking OK.  
1. Log out and in

## Usage

The testbenches can be run using "test.py".  
test.py is essentially a very small test framework for SystemVerilog.  
Svunit and vunit do not support generators in tests.  
Also was it difficult to findor did not support any free simulator.  
So I created this.  

It look for files that end with "_tb.sv", compiles them and runs them with vlog and vsim.

From the Terminal or PowerShell:
```console
$ cd nand2tetris-verilog
$ python test.py <project> <optional filename>
```
examples:
```console
$ python test.py 01
```
```console
$ python test.py 01 or_tb.sv
```

## Troubleshooting

####Linux:



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
VSIM 3> run  

    **Warning: (vsim-3116) Problem reading symbols from linux-gate.so.1 : can not open ELF file.**

    This seems to be related to this GDB bug report. The warning is harmless, as linux-gate.so.1 does not really exist. It is an interface provided by the Linux kernel to load ELF files. 
    A better method to fix this issue batch modelsim.ini located in the modelsim installation directory. Use following commands:
    nano modelsim.ini

    And write the following to the file  
    ```
    [msg_system]
    suppress = 3116
    ```

### Thanks
It was originally forked from https://github.com/f2xeb/n2t.  
Finding this repository convinced me that it was passible for me,  
someone with no experience in hardware design,  
to implement the HACK architecture in SystemVerilog.