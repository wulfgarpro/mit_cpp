#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "polygon.h"

class Triangle : public Polygon {
    public:
        Triangle(const Point lowerLeft, const Point lowerRight, const Point upper);
        double area() const;
};

#endif

