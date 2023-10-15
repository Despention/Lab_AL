CC = g++
CFLAGS = -Wall -Wextra -pedantic -std=c++11

SRC = main.cpp Stack.cpp
OBJ = $(SRC:.cpp=.o)
EXECUTABLE = stack

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
 $(CC) $(OBJ) -o $(EXECUTABLE)

%.o: %.cpp
 $(CC) $(CFLAGS) -c $< -o $@

clean:
 rm -f $(OBJ) $(EXECUTABLE)
