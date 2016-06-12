#include <iostream>
#include "triangle.h"
#include "point.h"
#include "geometry.cpp"
#include "polygon.h"

Triangle::Triangle(const Point lowerLeft, const Point lowerRight, const Point upper) : Polygon::Polygon(updateConstructorPoints(lowerLeft, lowerRight, upper), 3) {
};

const double Triangle::area() {
    return 3.2; // TODO 
};

