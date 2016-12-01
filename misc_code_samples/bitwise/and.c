#include <iostream>
#include <cassert>

// demonstrates bitwise AND (&)
int main(void) {
    /* here, item 3 is bit 3 in a byte, which is value 4 */

    //char items = 4; // in binary, 00000100, item 3 is true 

    // instead of the above, use shifting to manipulate single bits
    char item_3 = 1 << 2; // 00000100

    char item_3_in_use_check = 4; // this is equivalent to 0000100

    // 1 & 1 = 1, 1 & 0 = 0, which means if get result 1, item_3 is true
    char item_3_in_use = item_3 & item_3_in_use_check;    
    assert(item_3_in_use);
    std::cout << static_cast<int>(item_3_in_use) << std::endl;
    return 0;
}
