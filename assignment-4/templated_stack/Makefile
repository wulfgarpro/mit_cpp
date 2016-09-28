CXX = g++
CXXFLAGS = -g -O0 -std=c++11

TARGET = stack
SRCS = templated_stack_4_1.cpp runner.cpp
INCLUDES = templated_stack_4_1.h

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(SRCS) -o $(TARGET) $(CXXFLAGS)

clean:
	rm -rf $(TARGET)
