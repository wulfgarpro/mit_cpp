#ifndef POINT_H
#define POINT_H

class Point {
    private:
        int x, y;

    public:
        Point(int x, int y);
        Point(const Point& p); // copy constructor
        Point& operator= (const Point& p);
        int getX() const;
        int getY() const;
        void setX(const int);
        void setY(const int);
};

#endif

