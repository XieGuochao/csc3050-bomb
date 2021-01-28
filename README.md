# CSC3050 BOMB (MIPS)

You will need to set up your environment for running MIPS.

A convenient way is using Docker: `ccr.ccs.tencentyun.com/code-server/csc3050`

# How to build?

1. `make clean`
2. `make all`

# How to play with it?
1. `qemu-mipsel bomb` or `make run`. 
1. If you want to use gdb:
    1. `make run-server`
    2. `gdb-multiarch bomb` # This is used to call gdb.
    3. Inside GDB: `target remote :9999`
    4. Set your breakpoint.
    5. Use `c` to continue. Use `si` to step into assembly. Use `ni` to go to next assembly.
    6. Use `disassemble` to display the assembly code.

**Good Luck!**