all: list.o testing.o
	gcc list.o testing.o

run:
	./a.out

free: list.o testing.o
	gcc -g list.o testing.o

testing.o: testing.c
	gcc -c testing.c

list.o: list.c list.h
	gcc -c list.c

clean:
	rm *.o
