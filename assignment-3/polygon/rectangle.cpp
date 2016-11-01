#include <iostream>
#include "rectangle.h"
#include "point.h"
#include "geometry.cpp"
#include "polygon.h"

Rectangle::Rectangle(const Point lowerLeft, const Point upperRight) : Polygon::Polygon(updateConstructorPoints(lowerLeft, upperRight), 2) {
};

Rectangle::Rectangle(const Point lowerLeft, const Point upperLeft, const Point upperRight, const Point lowerRight) : Polygon::Polygon(updateConstructorPoints(lowerLeft, upperLeft, upperRight, lowerRight), 4) {
};

double Rectangle::area() const {
    return 5.5; // TODO 
};

