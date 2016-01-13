#include "point.h"

class PointArray {
    private:
        Point* points;
        //Point* start;
        int size;
        void resize(int n_size);
    public:
        PointArray();
        PointArray(const Point points[], const int size);
        PointArray(const PointArray& pa);
        ~PointArray();
        void push_back(const Point& p);
        void insert(const int position, const Point& p);
        void remove(const int position);
        int get_size() const;
        void clear();
        Point* get(const int position);
        const Point* get(const int position) const;
};
