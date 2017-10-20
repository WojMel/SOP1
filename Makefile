
main: main.c
	@gcc main.c -o main -std=c99 -pthread -Wall -Werror
	@echo "Kompilacja zakonczona"
run:
	@./main