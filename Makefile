all: main.c
	make build && make run
build: main.c
	gcc -O3 main.c -o main
run:
	./main
