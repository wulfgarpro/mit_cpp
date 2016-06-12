#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "polygon.h"

class Triangle : Polygon {
    public:
        Triangle(const Point lowerLeft, const Point lowerRight, const Point upper);
        const double area();
};

#endif

