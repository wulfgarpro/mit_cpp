#include "point.h"
#include <iostream>

int main(void) {
    Point* p = new Point(5,5);
    std::cout << p->getX() << std::endl;
}
