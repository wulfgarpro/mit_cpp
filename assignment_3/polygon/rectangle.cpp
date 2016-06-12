#include <iostream>
#include "rectangle.h"
#include "point.h"
#include "geometry.cpp"
#include "polygon.h"

Rectangle::Rectangle(const Point lowerLeft, const Point upperRight) : Polygon::Polygon(updateConstructorPoints(lowerLeft, upperRight), 2) {
};

Rectangle::Rectangle(const Point lowerLeftX, const Point lowerLeftY, const Point upperRightX, const Point upperRightY) : Polygon::Polygon(updateConstructorPoints(lowerLeftX, lowerLeftY, upperRightX, upperRightY), 2) {
};

double Rectangle::area() const {
    return 5.5; // TODO 
};

/* 
int main(void) {
    std::cout << "Polygon go..." << std::endl;
    std::cout << Polygon::getNumPolygons() << std::endl;

    Rectangle* r1 = new Rectangle(0,0,5,5);

    std::cout << Polygon::getNumPolygons() << std::endl;

    std::cout << "Rec area: " << r1->area() << std::endl;
    std::cout << "Rec sides count: " << r1->getNumSides() << std::endl;

    Rectangle* r2 = new Rectangle(5,5,0,0);

    std::cout << "Rec area: " << r2->area() << std::endl;
    std::cout << "Rec sides count: " << r2->getNumSides() << std::endl;

    std::cout << Polygon::getNumPolygons() << std::endl;

    delete r1;
    std::cout << Polygon::getNumPolygons() << std::endl;
    delete r1;
    std::cout << Polygon::getNumPolygons() << std::endl;
    
    return 0;
};
*/
