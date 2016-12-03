#include <iostream>
#include <cassert>

// demonstrates bitwise NOT (~) using bit field
int main(void) {
    // interesting trick to find largest value of unsigned int
    unsigned int max = ~0; // this gives you a uint of all 1's
    std::cout << max << std::endl;
    assert(max == 4294967295);

    // how do we turn a bit off if it's on: in two steps, complement (NOT) and then &
    char item_3 = 1 << 2; // 00000100
    char mask_3_off = ~(1<<2); // complement, 11111011
    assert(item_3 != 0);
    item_3 &= mask_3_off; // and our & step
    assert(item_3 == 0);

    std::cout << static_cast<int>(item_3) << std::endl;
    return 0;
}
