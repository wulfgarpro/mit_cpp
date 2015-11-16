#include <iostream>
using namespace std;

class A {
    friend class B;
    friend class C;

private:
    int a, b;    
    int sumVal;

public:
    A(const int a=0, const int b=0) {
        this->a = a;
        this->b = b;
    }
    int sum() {
        return this->a+this->b;
    }
    virtual int deductFromSum(int v)=0;
};

class B : public A {
    public:        
        B(int a, int b) : A(a, b) {}
        int deductFromSum(int v) {
            sumVal = (this->sum()-v);
            return sumVal;
        }
};

class C : public A {
    public:        
        C(int a, int b) : A(a, b) {}
        int deductFromSum(int v) {
            sumVal = (this->sum() / v);
            return sumVal;
        } 
};

int main(void) {
    B b(5,5);
    A* ab = &b;

    cout << "The sum of A (b) is: " << ab->sum() << endl;
    cout << "The deductFromSum of A (b) is: " << (ab->deductFromSum(5)) << endl;

    C c(5,5);
    A* ac = &c;

    cout << "The sum of A (c) is: " << ac->sum() << endl;
    cout << "The deductFromSum of A (c) is: " << (ac->deductFromSum(5)) << endl;

    return 0;
}
