CXX = g++

CXXFLAGS = -I. -I./../point -I ./../point_array -std=c++11

polygon: polygon.cpp
	$(CXX) polygon.cpp ../point/point.cpp ./../point_array/point_array.cpp rectangle.cpp triangle.cpp -o polygon  $(CXXFLAGS)

clean:
	rm -f polygon *.o

