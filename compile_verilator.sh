cd 05
rm -rf obj_dir
verilator -Wall --cc computer.sv -I../01 -I../02 -I../03 -I../05 --exe ../../computer.cpp -LDFLAGS "-lmingw32 -lSDL2main -lSDL2"
cd obj_dir
make -f Vcomputer.mk
cd ../../
./05/obj_dir/Vcomputer.exe