CC=gcc
CFLAGS=-Wall

all: my_program

my_program:
	$(CC) $(CFLAGS) src/client.c src/server.c -o my_program

clean:
	rm -f my_program
