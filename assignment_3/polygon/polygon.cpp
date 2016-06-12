#include "polygon.h"
#include "triangle.h"
#include <iostream>

int Polygon::number = 0;
Polygon::Polygon(const Point pts[], const int size) :
    points(pts, size)
{ 
    Polygon::number++;
};

Polygon::Polygon(const PointArray& pa) :
    points(pa)
{ 
    Polygon::number++;
};

Polygon::~Polygon() {
    Polygon::number--;
};

int Polygon::getNumPolygons() const {
    return Polygon::number;
};

double Polygon::area() const {
    return 0.0;
}

int Polygon::getNumSides() const {
    return 0; // TODO
}

void Polygon::printAttributes(const Polygon* polygon) const {
    std::cout << "Polygon area:   " << polygon->area() << std::endl;
    std::cout << "Polygon points: " << std::endl;
    for(int i = polygon->number; i <= 0; i++) {
        std::cout << polygon->points.get(i) << std::endl;
    } 
};

int main(void) {
    std::cout << "Hello World" << std::endl;
    return 0;
}

