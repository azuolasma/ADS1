# Makefile for compiling the priority queue and its test program

# Link the test program with the priority queue object file
test.exe: test.o priority_queue.o
	gcc -o test.exe test.o priority_queue.o

# Compile the test source file
test.o: test.c priority_queue.h
	gcc -c test.c

# Compile the priority queue implementation
priority_queue.o: priority_queue.c priority_queue.h
	gcc -c priority_queue.c

# Clean the build
clean:
	del *.o *.exe
