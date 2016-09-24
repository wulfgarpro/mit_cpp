CXX = g++
CXX_FLAGS = -g -O0 -std=c++11

TARGETS = set vector deque

all: $(TARGETS)
default: all

set: set.cpp
	$(CXX) set.cpp -o set $(CXX_FLAGS)	

vector: vector.cpp
	$(CXX) vector.cpp -o vector $(CXX_FLAGS)	

deque: deque.cpp
	$(CXX) deque.cpp -o deque $(CXX_FLAGS)	

clean: 
	rm -rf $(TARGETS)
