CXX = g++

CXXFLAGS = -std=c++11 -m64
LDFLAGS  = -I. -I../point 

TARGET = point_array 

default: point_array

all: clean point_array

point_array: point_array.cpp
	$(CXX) -c point_array.cpp ../point/point.cpp ${CXXFLAGS} $(LDFLAGS)

clean:
	rm -f $(target) *.o

