all: main

main: list.o main.o
	gcc list.o main.o -o main
list.o: src/list.c
	gcc -c src/list.c
main.o: src/main.c
	gcc -c src/main.c
clean:
	rm *.o
