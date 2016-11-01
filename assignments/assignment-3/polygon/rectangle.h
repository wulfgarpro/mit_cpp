#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "polygon.h"

class Rectangle : public Polygon {
    public:
        Rectangle(const Point lowerLeft, const Point upperRight);
        Rectangle(const Point lowerLeft, const Point upperLeft, const Point upperRight, const Point lowerRight);
        double area() const;
};

#endif

