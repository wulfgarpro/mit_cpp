#include "point_array.h"
#include <iostream>
#include <stdexcept>

// create an array with size 0
PointArray::PointArray() {
    this->size = 0;
    this->points = new Point[this->size];
};

// copy elements from points arg into internal array
PointArray::PointArray(const Point n_points[], const int size) {
    this->points = new Point[size];
    for(int i = 0; i < size; i++) {
        int x = n_points[i].getX();
        int y = n_points[i].getY();
        this->points[i] = Point(x, y);
    }
    this->size = size;
};

// copy constructor
PointArray::PointArray(const PointArray& other) {
    for(int i = 0; i < other.getSize(); i++) {
        int x = other.points[i].getX();
        int y = other.points[i].getY();
        this->points[i] = Point(x, y);
    }
    this->size = other.getSize();
};

PointArray::~PointArray() {
    delete [] this->points; // delete array
};

void PointArray::resize(int n_size) {
    if(n_size < 0) throw std::underflow_error("Can't resize below zero");
    
    Point* tmp_array = new Point[n_size];
    if(this->size == 0) {
        tmp_array[0] = this->points[0];
    } else {
        for(int i = 0; i < n_size; i++) {
            tmp_array[i] = this->points[i];
        }
    }

    this->points = tmp_array;
    this->size = n_size;

    delete [] this->points;
    delete tmp_array;
};

void PointArray::pushBack(const Point& p) {
    this->resize(this->size++);
    this->points[this->size] = p;
};

void PointArray::insert(const int position, const Point& p) {
    std::cout << "before insert: " << p.getX() << ", " << p.getY() << std::endl;
    if(this->size == 0) {
        resize(this->size + 1); // extra element position
        this->points[0] = p;
        std::cout << "x: " << this->points[0].getX() << ", " << this->points[0].getY() << std::endl;
    } else {
        resize(this->size + 1); // extra element position
        for(int i = (this->size-1); i > 0; i--) { // zero based
            if(!(i == position)) {
                this->points[i+1] = this->points[i];
            } else {
                this->points[i] = p;
        std::cout << "x: " << this->points[i].getX() << ", " << this->points[i].getY() << std::endl;
            }
        }
    }
};

void PointArray::remove(const int position) {
    if(position < this->size) throw 
        std::underflow_error("Can't remove below size");
    if(position > this->size) throw 
        std::overflow_error("Can't insert above size");

    Point* p = &this->points[position];
    p = nullptr;
    resize(this->size - 1); // reduce by 1
};

int PointArray::getSize() const {
    return this->size;
};

void PointArray::clear() {
    resize(0);
};

Point* PointArray::get(const int position) {
    if(this->size == 0) return nullptr;
    if(position > this->size) return nullptr;
    Point found = this->points[position];
    return (&this->points[position]);
};

const Point* PointArray::get(const int position) const {
    std::cout << "searching for position: " << position << std::endl;
    if(this->size == 0) return nullptr;
    if(position > this->size) return nullptr;    
    Point* p = &points[position];
    return (&this->points[position]);
};

