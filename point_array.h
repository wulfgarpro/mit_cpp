#include "point.h"

class PointArray {
private:
    Point* start;
    int size;
    void resize(int n);
public:
    PointArray();
    PointArray(const Point points[], const int size);
    PointArray(const PointArray& pa);
    ~PointArray();
    void pushBack(Point& p);
    void insert(const int position, const Point& p);
    void remove(const int position);
    int getSize() const;
    void clear();
    Point* get(const int position);
    const Point* get(const int position) const;
};