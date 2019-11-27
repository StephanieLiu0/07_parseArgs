all: parse.o
	gcc -o program parse.o

parse.o: parse.c
	gcc -c parse.c

run:
	./program

clean:
	rm *.o
	rm *~
