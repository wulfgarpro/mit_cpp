#include <iostream>
#include <cassert>

// demonstrates bitwise OR (|) using bit field
int main(void) {
    /* here we demonstrate turning a bit on using OR */

    char item_3 = 0 << 2; // this is redundant, it demonstrates a shift with 0 does nothing (we want item_3 to be 0 in any case)
    assert(!item_3);
    std::cout << static_cast<int>(item_3) << std::endl; // off

    // with OR, 1 | 0 = 1, 1 | 1 = 1, 0 | 0 = 0
    // our mask to turn item 3 on (it's off as per our variable above)
    item_3 |= 1 << 2;
    assert(item_3);

    std::cout << static_cast<int>(item_3) << std::endl; // now on
    return 0; 

}
