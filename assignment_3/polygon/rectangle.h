#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "polygon.h"

class Rectangle : Polygon {
    public:
        Rectangle(const Point lowerLeft, const Point upperRight);
        Rectangle(int lowerLeftX, int lowerLeftY, int upperRightX, int upperRightY);
        const double area();
};

#endif

