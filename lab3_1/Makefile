# Makefile for FixedCapacityStack project

CC = g++
CFLAGS = -Wall -Wextra -pedantic -std=c++11

SRC = FixedCapacityStack.cpp main.cpp 
OBJ = $(SRC:.cpp=.o)
EXECUTABLE = stack

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) -o $(EXECUTABLE)

main.o: main.cpp FixedCapacityStack.h
	$(CC) $(CFLAGS) -c main.cpp

FixedCapacityStack.o: FixedCapacityStack.cpp FixedCapacityStack.h
	$(CC) $(CFLAGS) -c FixedCapacityStack.cpp

clean:
	rm -f $(OBJ) $(EXECUTABLE)
