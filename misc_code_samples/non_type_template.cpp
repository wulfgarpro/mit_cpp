#include <iostream>

/*
 * http://en.cppreference.com/w/cpp/language/template_parameters#Non-type_template_parameter
 */

template<int I>
void add (int& i) {
    i += I;
}

int main() {
    int x = 10;
    add<5>(x); // this will do 10 + 5
    std::cout << x << std::endl;
    return 0;
}
