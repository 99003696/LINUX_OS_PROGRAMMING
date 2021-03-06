all: prog1 prog2

prog1: User1.c
	gcc User1.c -o u1 -lrt

prog2: User2.c
	gcc User2.c -o u2 -lrt

Build: all

run: Build
	./u1.out
	./u2.out
