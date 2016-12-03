#include <iostream>
#include <cassert>

int main(void) {
    /*int a = 5;
    int b = 2;

    assert(a == 5);
    assert(b == 2);

    int tmp = a;
    a = b;
    b = tmp;

    assert(a == 2);
    assert(b == 5);*/

    int a = 5; // 00000101
    int b = 2; // 00000010

    // how can we XOR these two so that we swap their values without a tmp?

    // A XOR B = C (c is A + B)
    // A XOR C = B
    // B XOR C = A
    a ^= b ^= a ^= b; // a is now b
    assert(a == 2);
    assert(b == 5);

    return 0;
}
