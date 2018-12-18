#nand2tetris verilog
The course nand2tetris is on coursera https://www.coursera.org/learn/nand2tetris2  
There is also a website https://www.nand2tetris.org/  
I can also highly recommend the book from this course:  

**The Elements of Computing Systems**  
*Building a Modern Computer from First Principles*

This project is an implementation of the HACK architecture in SysytemVerilog.  
The no-solutions branch is meant for students to implement the architecture themselves.  
For each chip, there is a testbench to test its functionctionality.  

### Requirements
- python
- ModelSim starter edition

## Installation

#### Python:
Many operating systems come with python preinstalled.  
In Ubuntu you can do something like:
```
$ sudo apt install python3.6
```
More info: https://docs.python-guide.org/starting/install3/linux/  

In Windows you usually would download the installer from  https://www.python.org/downloads/windows/  

Mac OS X:
```
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
Redhat should be easy, but if you are using another distro, for example Ubuntu, there can be some problems.  

This link might be useful:  
https://gist.github.com/PrieureDeSion/e2c0945cc78006b00d4206846bdb7657  

It's not really needed to use the gui, but if the editor in modelsim is showing a really small font:  
https://stackoverflow.com/questions/31555431/the-font-of-my-modelsim-is-too-small-to-see

This is the answer I found:
1. Open ~/.modelsim (use "nano ~/.modelsim" in terminal)
1. Find: PrefDefault = ... textFontV2 {{Courier 10 Pitch} 12 normal roman} (the name of the font may differ)
1. Change 12 to -12, so it will looks like this: textFontV2 {{Courier 10 Pitch} -12 normal roman} 
1. Save ~/.modelsim (Ctrl+O and then Enter)

Reopen modelsim
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
From the Terminal or PowerShell:
```
$ cd nand2tetris-verilog
$ python test.py <project> <optional filename>
```
examples:
```
$ python test.py 01
```
```
$ python test.py 01 or_tb.sv
```