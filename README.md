# CSC3050 BOMB (MIPS)

You will need to set up your environment for running MIPS.

A convenient way is using Docker: `ccr.ccs.tencentyun.com/code-server/csc3050`

# How to run?

1. `make clean`
2. `make all`
3. If you want to use gdb:
    1. `make run-server`
    2. `gdb-multiarch hello`
    3. Inside GDB: `target remote :9999`
    4. Set your breakpoint.
    5. Use `c` to continue. Use `si` to step into assembly. Use `ni` to go to next assembly.
    6. Use `disassemble` to display the assembly code.

**Warning: Do not read the hello.c directly! You are welcome to read the .asm files (which actually you should use objdump to generate).**