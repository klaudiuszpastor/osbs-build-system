flags = -O2 -Wall -Wextra -std=c++17

.PHONY: all clean

all: clean PROJECTNAME

PROJECTNAME: PROJECTNAME.o
	g++ $(flags) $^ -o $@

PROJECTNAME.o: PROJECTNAME.cpp PROJECTNAME.hpp
	g++ $(flags) -c $<

clean:
	rm -f *.o PROJECTNAME

