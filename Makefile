CC = clang
CFLAGS = -Wall -Wextra -Werror -std=c17 

all: main.c 
	$(CC) $(CFLAGS)  main.c -o main
