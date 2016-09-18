#include <iostream>

int main(void) {
    std::string name = "James";

    for(char &c : name) {
        std::cout << c << std::endl;
    }

    return 0;
}
