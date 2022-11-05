CC = clang
CFLAGS = -std=c11 -m64 -o
CEXTRAFLAGS = -Wall -Wextra -Werror -pedantic -g
all: main.c 
	$(CC) $(CEXTRAFLAGS) $(CFLAGS) main main.c 
