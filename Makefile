CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Werror -pedantic -m64
all: main.c 
	$(CC) $(CFLAGS)  main.c -o main
