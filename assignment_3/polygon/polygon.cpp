#include "polygon.h"
#include <iostream>

int Polygon::number = 0;

Polygon::Polygon(const Point pts[], const int size) { 
    points = new PointArray(pts, size);
    Polygon::number++;
};

Polygon::Polygon(const PointArray& pa) { 
    points = &pa; 
};

Polygon::~Polygon() {
    Polygon::number--;
    delete points;
};

int Polygon::getNumPolygons() {
    return Polygon::number;
};

int main(void) {
    std::cout << "Polygon go..." << std::endl;
    std::cout << Polygon::getNumPolygons() << std::endl;
    return 0;
};

