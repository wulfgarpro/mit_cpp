#include "rectangle.h"
#include "point.h"
#include "geometry.cpp"

Rectangle::Rectangle(const Point lowerLeft, const Point upperRight) : Polygon::Polygon(updateConstructorPoints(lowerLeft, upperRight), 2) {
};

Rectangle::Rectangle(int lowerLeftX, int lowerLeftY, int upperRightX, int upperRightY) : Polygon::Polygon(updateConstructorPoints(lowerLeftX, lowerLeftY, upperRightX, upperRightY), 2) {
};

double Rectangle::area() {
    return 0.0;
};

