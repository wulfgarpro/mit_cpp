#include "point.h"

Point::Point(int x=0, int y=0) : x(x), y(y) {
};

Point::Point(const Point& p) {
    this->x = p.getX();
    this->y = p.getY();
};

Point& Point::operator= (const Point& p) {
    if (this != &p) {
        this->x = p.getX();
        this->y = p.getY();
    }
    return *this;
};

int Point::getX() const {
    return this->x;
};

int Point::getY() const {
    return this->y;
};

void Point::setX(const int x) {
    this->x = x;
};

void Point::setY(const int y) {
    this->y = y;
};

