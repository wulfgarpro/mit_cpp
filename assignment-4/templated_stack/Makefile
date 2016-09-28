CXX = g++
CXXFLAGS = -g -O0 -std=c++11

TARGET = stack
SRCS = templated_stack_4_1.cpp runner.cpp
INCLUDES = templated_stack_4_1.h

default: $(TARGET)

all: clean $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(SRCS) -I. -o $(TARGET) $(CXXFLAGS)

clean:
	rm -rf $(TARGET)
