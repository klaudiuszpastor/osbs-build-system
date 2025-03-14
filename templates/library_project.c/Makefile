CC = gcc
CFLAGS = -O2 -Wall -Wextra -std=c2x -Iinclude
AR = ar
ARFLAGS = rcs

.PHONY: all clean static dynamic

all: clean static

# Build static library (libPROJECTNAME.a)
static: src/PROJECTNAME.o
	$(AR) $(ARFLAGS) libPROJECTNAME.a $^

# Build dynamic library (libPROJECTNAME.so)
dynamic: src/PROJECTNAME.o
	$(CC) -shared -o libPROJECTNAME.so $^

src/PROJECTNAME.o: src/PROJECTNAME.c include/PROJECTNAME.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o libPROJECTNAME.a libPROJECTNAME.so

