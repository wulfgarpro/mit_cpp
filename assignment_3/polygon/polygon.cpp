#include "polygon.h"
#include <iostream>

int Polygon::number = 0;

Polygon::Polygon(const Point points[], const int size) : points(points, size) { 
    Polygon::number++;
};

Polygon::~Polygon() {
    Polygon::number--;
}

int main(void) {
    std::cout << "Polygon go..." << std::endl;
    return 0;
}
