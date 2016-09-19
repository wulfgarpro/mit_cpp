#include "word.h"
#include <iostream>

int main(void) {
    Word w1("beast");
    Word w2("dough");
    Word w3("happy");
    Word w4("question");

    std::cout << "Let's go" << std::endl;
    std::cout << w1.pigLatinify() << std::endl;
    std::cout << w2.pigLatinify() << std::endl;
    std::cout << w3.pigLatinify() << std::endl;
    std::cout << w4.pigLatinify() << std::endl;

    return 0;
}
