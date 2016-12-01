#include <iostream>
#include <cassert>

int main(void) {

    char items = 4; // in binary, 00000100, item 3 is true 
    char item_3_in_use_check = 4; // this is equivalent to 0000100

    char item_3_in_use = items & item_3_in_use_check; // 1 if true, 0 if false
    assert(item_3_in_use);
    std::cout << static_cast<int>(item_3_in_use) << std::endl;
    return 0;
}
