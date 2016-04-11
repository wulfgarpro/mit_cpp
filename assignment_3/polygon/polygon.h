#ifndef POLYGON_H
#define POLYGON_H

#include "point.h"
#include "point_array.h"

class Polygon {
    protected:
        const PointArray* points;
        static int number;

    public:
        Polygon(const Point pts[], const int length);
        Polygon(const PointArray& pa);
        ~Polygon();
        virtual double area() = 0;
        virtual int getNumSides() = 0;
        virtual const PointArray* getPoints() = 0;
        static int getNumPolygons();
};

#endif

