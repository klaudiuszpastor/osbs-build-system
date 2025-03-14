CC = gcc
CFLAGS = -O2 -Wall -Wextra -std=c2x -Iinclude

.PHONY: all clean test

all: clean PROJECTNAME

PROJECTNAME: src/PROJECTNAME.o
	$(CC) $(CFLAGS) $^ -o $@

src/PROJECTNAME.o: src/PROJECTNAME.c include/PROJECTNAME.h
	$(CC) $(CFLAGS) -c $< -o $@

test: clean test_bin
	./test_bin

test_bin: tests/test_PROJECTNAME.o src/PROJECTNAME.o
	$(CC) $(CFLAGS) $^ -o test_bin

tests/test_PROJECTNAME.o: tests/test_PROJECTNAME.c include/PROJECTNAME.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o tests/*.o PROJECTNAME test_bin

