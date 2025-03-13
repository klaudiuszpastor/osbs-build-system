flags =-O2 -Wall -Wextra -std=c2x 

.PHONY: all clean

all: clean PROJECTNAME

PROJECTNAME: PROJECTNAME.o
	cc $(flags) $^ -o $@ 

PROJECTNAME.o:  PROJECTNAME.c PROJECTNAME.h
	cc $(flags) -c $<

clean:
	rm -f *.o PROJECTNAME
