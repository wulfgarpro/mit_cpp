class Point {
private:
    int x, y;

public:
    Point(int x=0, int y=0) : x(x), y(y) {};
    int getX() const;
    int getY() const;
    void setX(const int);
    void setY(const int);
};