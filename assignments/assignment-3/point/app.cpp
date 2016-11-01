#include <iostream>
#include "point.h"

using namespace std;

int main(void) {
    Point p;
    cout << p.getX() << ", " << p.getY() << endl;
    p.setX(1);
    p.setY(2);
    cout << p.getX() << ", " << p.getY() << endl;
    return 0;
}
