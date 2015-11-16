#include <iostream>

using namespace std;

class Custom {
    public:
        Custom(int aa, int bb) {
            a = aa;
            b = bb;
        }

        // having this defined in the class
        // means we're only able to assign to
        // the right of the overloaded operator
        // i.e. a + b; # a being _this_
        // that is, there is only 1 argument
        // (see `friend`)

        // ONLY 1 can be commented in
        /*Custom operator+(Custom c) {
            Custom tmp(0,0);
            tmp.setA(a + c.getA());
            tmp.setB(b + c.getB());
            return tmp;
        }*/

        int sum() {
            return a + b;
        }

        int getA() { return a; }
        int getB() { return b; }
        int setB(int bb) { b = bb; }
        int setA(int aa) { a = aa; }
    private:
        int a;
        int b;
};

// defining an overloaded operator outside
// of the class enables assignment to the
// left and right of the operator
Custom operator+(Custom a, Custom b) {
    Custom tmp(0,0);
    tmp.setA(a.getA() + b.getA());
    tmp.setB(b.getA() + b.getB());
    return tmp;
}

int main(void) {
    Custom a(1,2);
    Custom b(2,3);
    cout << a.sum() << endl;
    cout << b.sum() << endl;
    Custom c = a+b;
    cout << c.sum() << endl;
}
