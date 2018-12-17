#nand2tetris verilog
This project is an implementation of the hack architecture in SysytemVerilog.  
The no-solutions branch is meant for students to implement the architecture themselves.  
For each chip, there is a testbench to test its functionctionality.  

### Requirements:
- python
- ModelSim starter edition

## Installation

#### Python:
Many operating systems come with python preinstalled.  
In Ubuntu you can do somethin like:
```
$ sudo apt install python3.6
```
In Windows you usually would download the installer from  https://www.python.org/downloads/windows/  

#### ModelSim:
You can get a free copy of ModelSim starter edition from Intel:  
http://fpgasoftware.intel.com/18.1/?edition=standard&download_manager=dlm3&product=modelsim_ae#tabs-2  
First you have to register, then you can download the ModelSim installer.

In windows the installation is very easy, but on ubuntu there can be some problems.  
This link might be useful:  
https://gist.github.com/PrieureDeSion/e2c0945cc78006b00d4206846bdb7657

#### Configuration:
I should update this to be an environment variable, but for now:
edit test.py to use your vlog compiler and vsim simulator, 
## Usage
```
$ python test.py <project> <optional filename>
```
examples:
```
$ python test.py 01
```
```
$ python test.py 01 or_tb.sv
```