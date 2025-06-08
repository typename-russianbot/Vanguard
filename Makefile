#? GNU
CXX = g++
CXX_FLAGS = -std=c++23 -Wall -g 

#! FLAGS
SRC = $(shell find source -name '*.cpp')
OBJ = $(patsubst source/%.cpp, build/%.o, $(SRC))
BLD = build
exe = run

#& FUNCTIONS
all: $(exe)

clean:
	rm -rf $(exe) $(BLD)
	clear

rebuild: 
	rm -rf $(exe) $(BLD)
	make

$(exe): $(OBJ)
	$(CXX) $(CXX_FLAGS) $(OBJ) -o $(exe) -lsfml-graphics -lsfml-window -lsfml-system

build/%.o: source/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXX_FLAGS) -c $< -o $@ 