
main: main.c
	@gcc main.c -o main -pthread -Wall -Werror
	@echo "Kompilacja zakonczona"
run:
	@./main