#Sample Makefile

#Note that # signals a comment in Makefiles.
#You do not need the comments we supply here
#in your own Makefiles, they are present for
#educational purposes.

#Setting gcc 5.1.0 on CAEN
PATH := /usr/um/gcc-5.1.0/bin:$(PATH)
LD_LIBRARY_PATH := /usr/um/gcc-5.1.0/lib64
LD_RUN_PATH := /usr/um/gcc-5.1.0/lib64

#Macros in Makefiles are similar to macros in
#C/C++ and work by substituting the value of the
#macro instead of its name
FLAGS := -Wall -Wextra -pedantic -Wvla -std=c++14

# The default target, which is built if no target is specified
# This will add -O3 to FLAGS and then build the target all.
release: FLAGS += -O3
release: all

# make debug - will compile "all" with $(FLAGS) and the g flag
debug: FLAGS += -g
debug: all

# For each .cpp file, you should have a .o file entry below.
# For each .o file, make sure you list the files that the target
# depends upon.  For instance, if you had a file named example.h,
# the first line of the entry would look like this:
#example.o: example.cpp example.h

all: print.o main.o
	g++ $(FLAGS) print.o main.o -o main
	
print.o: print.cpp print.h
	g++ $(FLAGS) -c print.cpp -o print.o

main.o: main.cpp
	g++ $(FLAGS) -c main.cpp -o main.o

# make clean - remove .o files.  You can modify it to remove whatever
#.PHONY: clean
clean:
	rm -f *.o main
