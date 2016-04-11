#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "polygon.h"

class Rectangle : Polygon {
    Rectangle(const Point lowerLeft, const Point upperRight);
    Rectangle(int lowerLeftX, int lowerLeftY, int upperRightX, int upperRightY);
    double area();
};

#endif

