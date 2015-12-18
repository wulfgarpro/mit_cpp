#include "point_array.h"

PointArray::PointArray() {};
PointArray::PointArray(const Point points[], const int size) {};
PointArray::PointArray(const PointArray& pa) {};
PointArray::~PointArray() {};
void PointArray::pushBack(Point& p) {};
void PointArray::insert(const int position, const Point& p) {};
void PointArray::remove(const int position) {};
int PointArray::getSize() const {};
void PointArray::clear() {};
Point* PointArray::get(const int position) {};
const Point* PointArray::get(const int position) const {};

int main(void) {
    return 0;
};