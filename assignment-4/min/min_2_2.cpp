#include <iostream>
#include <cstddef>

#ifndef MIN
#define MIN(a, b) a < b ? a : b
#endif

class Custom {
    public:
        Custom(int aa, int bb) {
            a = aa;
            b = bb;
        }

        int sum() {
            return a + b;
        }

        int getA() { return a; }
        int getB() { return b; }
        void setB(int bb) { b = bb; }
        void setA(int aa) { a = aa; }
    private:
        int a;
        int b;
};

Custom& operator<(Custom& a, Custom& b) {
    int suma = a.sum();
    int sumb = b.sum();
    Custom& tmp = (suma < sumb) ? a : b;
    return tmp;
}

int main(void) {
    Custom a(3,1);
    Custom b(2,2);
    Custom* c = MIN(&a, &b);
    int i = MIN(1,2);
    std::cout << "Smallest comparable is: " << c->sum() << std::endl;
    return 0;
}
