#include <iostream>
#include <string>
#include "Super.h"
#include "Child.h"

int main(void) {
    std::string word = "Hi!";

    Super s;
    s.greeting();

    Child c(20, word);    
    c.greeting();
}

