#ifndef POLYGON_H
#define POLYGON_H

#include "point.h"
#include "point_array.h"

class Polygon {
    public:
        Polygon(const Point points[], const int length);
        Polygon(PointArray* pointArray);
        ~Polygon();
        virtual double area() = 0;
        int getNumPolygons() { return number; };
        virtual int getNumSides() = 0;
        virtual const PointArray* getPoints() = 0;

    protected:
        const PointArray points;
        static int number;

    private:
};

#endif

