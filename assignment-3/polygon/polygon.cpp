#include "point.h"
#include "polygon.h"
#include "triangle.h"
#include "rectangle.h"
#include <iostream>
#include <assert.h>

int Polygon::number = 0;
Polygon::Polygon(const Point pts[], const int size) :
    points(pts, size)
{ 
    Polygon::number++;
};

Polygon::Polygon(const PointArray& pa) :
    points(pa)
{ 
    Polygon::number++;
};

Polygon::~Polygon() {
    Polygon::number--;
};

int Polygon::getNumPolygons() {
    return Polygon::number;
};

int Polygon::getNumSides() const {
    return 0; // TODO
}

void Polygon::printAttributes(const Polygon* polygon) {
    std::cout << "Polygon area:   " << polygon->area() << std::endl;
    std::cout << "Polygon points: " << std::endl;

    int count = polygon->points.getSize();
    for(int i = 0; i <= count-1; i++) {
        const Point* tmp = polygon->points.get(i);
        std::cout << tmp->getX() << ", " << tmp->getY() << std::endl;
    }

    std::cout << "done... :)" << std::endl;
};

int main(void) {
    Point a(0,0);
    Point b(5,5);
    Point c(0,0);
    Point d(5,5);

    const Rectangle* r = new Rectangle(a, b, c, d); 
    //const Rectangle* r2 = new Rectangle(a, b); 
    Polygon::printAttributes(r);

    const Triangle* t = new Triangle(a, b, c); 
    Polygon::printAttributes(t);

    //std::cout << "area: " << r->area() << std::endl;
    //std::cout << "sides count: " << r->getNumSides() << std::endl;

    //std::cout << "area: " << r2->area() << std::endl;
    //std::cout << "sides count: " << r2->getNumSides() << std::endl;

    return 0;
}

