#ifndef POINT_ARRAY_H
#define POINT_ARRAY_H

#include "point.h"

class PointArray {
    private:
        Point* points;
        int size;
        void resize(int n_size);

    public:
        PointArray();
        PointArray(const Point points[], const int size);
        PointArray(const PointArray& pa);
        ~PointArray();
        void pushBack(const Point& p);
        void insert(const int position, const Point& p);
        void remove(const int position);
        int getSize() const;
        void clear();
        Point* get(const int position);
        const Point* get(const int position) const;
};

#endif

