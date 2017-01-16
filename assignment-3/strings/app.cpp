#include "word.h"
#include "strings.h"
#include <string>
#include <iostream>

int main(void) {
    Word w1("beast");
    Word w2("dough");
    Word w3("happy");
    Word w4("question");

    Strings<Word>* strings = new Strings<Word>();
    strings->addWord(&w1);
    strings->addWord(&w2);
    strings->addWord(&w3);
    strings->addWord(&w4);

    std::string pigLatin = strings->latinifyString();
    std::cout << pigLatin << std::endl;
    return 0;
}
