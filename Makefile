all: hello.o hello hello.asm hello-c.asm run

hello.o: hello.c
	mcc hello.c -static -c -o hello.o

hello: hello.c
	mcc hello.c -static -o hello

hello-c.asm: hello.o
	mobjdump -Sa hello.o > hello-c.asm

hello.asm: hello
	mobjdump -Sa hello > hello.asm

run: hello
	qemu-mipsel hello

run-server: hello
	qemu-mipsel -g 9999 hello

clean:
	rm hello.o hello hello.asm hello-c.asm