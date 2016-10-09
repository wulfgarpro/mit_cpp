CXX = g++
CXXFLAGS = -O0 -g -std=c++11
INCLUDES = graph.h
SRCS = graph.cpp runner.cpp
OBJS = graph.o runner.o

TARGET = graph

all: clean $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -I $(INCLUDES) -o $(TARGET)

$(OBJS): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $(SRCS)

clean:
	rm -rf *.o $(TARGET)
