all: simple.exe

simple.o: simple.c
	gcc -c simple.c

simple.exe: simple.o makefile
	gcc -o simple.exe simple.o

clean:
	rm *.o *.exe
