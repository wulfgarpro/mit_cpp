#include <iostream>
#include <cassert>

// demonstrates exclusive or, XOR, (^) with bit field
int main(void) {
    // XOR is 1 1 = 0, 1 0 = 1, 0 1 = 1, 0 0 = 0, only 1 of either can be 1, unlike OR, where 1 1 = 1
    // XOR is a way of flipping a specific bit on or off without using the complement operator + & in two seperate stages (see not.c)
    // Using complement + & is a hacky way of turning a bit on; why would you use a bitmask with the opposites of the items in the original byte to turn a bit on or off if you didn't have to? XOR is a better way
    // e.g.
    //

    char item_3 = 1 << 2; // 00000100
    assert(item_3 != 0);
    item_3 ^= item_3; // this flips item_3 only
    assert(item_3 == 0); // 00000000
    return 0;
}
