CC=gcc
CFLAGS=
RM=rm -rf
OUT=stack

vector: main.o stack.o
	$(CC) -o $(OUT) main.c stack.c 
	$(RM) *.o
main.o: main.c
	$(CC) -c main.c

stack.o: stack.c
	$(CC) -c stack.c

clean: 
	$(RM) *.o stack
