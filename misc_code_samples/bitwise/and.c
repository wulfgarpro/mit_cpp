#include <iostream>
#include <cassert>

// demonstrates bitwise AND (&) using bit field
int main(void) {
    /* here we demonstrate checking whether a bit is on or off using AND */
    
    //item 3 is bit 3 in a byte, which is value 4 (2^2)

    //char items = 4; // in binary, 00000100, item 3 is true 
    
    /* instead of the above, use shifting (<< or >>) to manipulate single bits */

    // this is our bit field we are checking against (this is the current state of some attribute we might have reached over the use of our program, e.g. car 3 is on road)
    char item_3 = 1 << 2; // 00000100

    // this is our check value, a bitmask
    char item_3_in_use_check = 4; // this is equivalent to 0000100

    // 1 & 1 = 1, 1 & 0 = 0, which means if get result 1, item_3 is true
    char item_3_in_use = item_3 & item_3_in_use_check;    
    assert(item_3_in_use);
    std::cout << static_cast<int>(item_3_in_use) << std::endl;
    return 0;
}
