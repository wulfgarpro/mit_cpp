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
        this->points[i] = *(new Point(x, y));
    }
    this->size = size;
    //this->start = this->points;
};

// copy constructor
PointArray::PointArray(const PointArray& other) {
    for(int i = 0; i < other.get_size(); i++) {
        int x = other.points[i].getX();
        int y = other.points[i].getY();
        this->points[i] = *(new Point(x, y));
    }
    this->size = other.get_size();
    //this->start = pa->start;
};

PointArray::~PointArray() {
    if(points != nullptr) {
        for(int i = 0; i < this->size; i++) {
            delete (&this->points[i]); // delete each point obj
        }
    }
    delete [] this->points; // delete array
};

void PointArray::resize(int n_size) {
    Point* tmp_array = new Point[n_size];

    for(int i = 0; i < n_size; i++) {
        if(!(&this->points[i] == nullptr)) {
            tmp_array[i] = this->points[i];
        }
    }
    
    for(int i = 0; i < this->size; i++) {
        delete (&this->points[i]); // delete each point obj
    }
     
    delete [] this->points; // delete array

    this->points = tmp_array;
    this->size = n_size;
};

void PointArray::push_back(const Point& p) {
    this->resize(this->size++);
    this->points[this->size] = p;
};

void PointArray::insert(const int position, const Point& p) {
    if(position < this->size) throw 
        std::underflow_error("Can't insert below size");
    if(position > this->size) throw 
        std::overflow_error("Can't insert above size");

    resize(this->size + 1); // extra element position
    for(int i = this->size; i > 0; i--) {
        if(!i == position) {
            std::cout << "wrong position" << std::endl;
            this->points[i+1] = this->points[i];
        } else {
            std::cout << "got else" << std::endl;
            this->points[i] = p;
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

int PointArray::get_size() const {
    return this->size;
};

void PointArray::clear() {
    resize(0);
};

Point* PointArray::get(const int position) {
    std::cout << "Got position: " + position;

    if(this->size == 0) return nullptr;
    if(position > this->size) return nullptr;
    Point found = this->points[position];
    std::cout << found.getX();
    return &(this->points[position]);
};

const Point* PointArray::get(const int position) const {
    if(this->size == 0) return nullptr;
    if(position > this->size) return nullptr;    
    Point* p = &points[position];
    return (&this->points[position]);
};

/*int main(void) {
    PointArray* pa = new PointArray();        
    std::cout << pa->get_size() << std::endl;

    const Point p(5,5);
    pa->insert(0, p);

    std::cout << pa->get_size() << std::endl;
    Point* found = pa->get(0);
    
    std::cout << found->getX() << std::endl;

    //delete pa;
    
    return 0;
};*/
