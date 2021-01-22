all: bomb run

bomb.o: bomb.c
	mcc bomb.c tasks.c -static -c -o bomb.o

bomb: bomb.c
	mcc bomb.c tasks.c -static -o bomb

bomb-c.asm: bomb.o
	mobjdump -Sa bomb.o > bomb-c.asm

bomb.asm: bomb
	mobjdump -Sa bomb > bomb.asm

run: bomb
	qemu-mipsel bomb

run-server: bomb
	qemu-mipsel -g 9999 bomb

clean:
	rm bomb.o bomb bomb.asm bomb-c.asm