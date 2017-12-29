CC=gcc
CFLAGS=-Wall -fno-stack-protector -z execstac

all: hisec
hisec: hisec.o
hisec.o: hisec.c

clean:
	rm -f hisec hisec.o
run: hisec
	./hisec
