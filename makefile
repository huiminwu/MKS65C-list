all: list.o testing.o
	gcc -o Lister list.o testing.o

list.o: list.c list.h
	gcc -c list.c

testing.o: testing.c list.h
	gcc -c testing.c

run:
	./Lister
