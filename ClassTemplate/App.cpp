#include <iostream>
#include "Super.h"
#include "Child.h"

using namespace std;

// polymorphic
std::string getWord(Super& s) {
    return s.getWord();
}

int main(void) {
    std::string wordA = "Hi!";

    Child c(20, wordA);    
    c.greeting(); // base class

    std::string word = getWord(c);
    cout << word << endl;
}

