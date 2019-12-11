CC=gcc
CFLAGS=
RM=rm -rf
OUT=vector

vector: main.o vector.o
	$(CC) -o $(OUT) main.c vector.c 
	$(RM) *.o
main.o: main.c
	$(CC) -c main.c

vector.o: vector.c
	$(CC) -c vector.c

clean: 
	$(RM) *.o vector
