#include <iostream>
#include <string>
#include "Super.h"
#include "Child.h"

using namespace std;

Child::Child(int number, std::string& word) : Super(number), word(word) {
    cout << "and here's more from child :)" << endl;
}

std::string& Child::getWord() {
    return word;
}

