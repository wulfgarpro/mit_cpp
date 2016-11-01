#include <iostream>

/* A union is a type that can have variable members,
 * where only 1 member is active at any one time. */

int main(void) {
    // Our union can have an int OR a float
    typedef union my_b {
        int a;
        float b;
    } B;

    B b;
    b.a = 1; // set a

    std::cout << b.a << std::endl; // a is set
    std::cout << b.b << std::endl; // accessing b is undefined behavior
    return 0;
}
