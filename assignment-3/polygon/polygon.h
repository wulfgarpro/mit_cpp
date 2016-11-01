#ifndef POLYGON_H
#define POLYGON_H

#include "point.h"
#include "point_array.h"

class Polygon {
    protected:
        const PointArray points;
        static int number;

    public:
        Polygon(const Point pts[], const int length);
        Polygon(const PointArray& pa);
        ~Polygon();
        virtual double area() const = 0;
        int getNumSides() const;
        const PointArray* getPoints() const { return &points; };
        static int getNumPolygons();
        static void printAttributes(const Polygon* polygon);
};

#endif

