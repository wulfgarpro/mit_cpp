#include "polygon.h"
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

int Polygon::getNumPolygons() {
    return Polygon::number;
};

