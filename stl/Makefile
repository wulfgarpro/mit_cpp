CXX = g++
CXX_FLAGS = -g -O0 -std=c++11

TARGETS = set vector

all: $(TARGETS)
default: all

set: set.cpp
	$(CXX) set.cpp -o set $(CXX_FLAGS)	

vector: vector.cpp
	$(CXX) vector.cpp -o vector $(CXX_FLAGS)	

clean: 
	rm -rf $(TARGETS)
