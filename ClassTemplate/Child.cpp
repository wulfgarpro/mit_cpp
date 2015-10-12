#include <iostream>
#include <string>
#include "Super.h"
#include "Child.h"

using namespace std;

Child::Child(int number, std::string& word) : Super(number, word) {
    cout << "and here's more from child :)" << endl;
}

Child::Child(int number, std::string& word, std::string& otherWord) : Super(number, word), otherWord(otherWord) {    
    cout << "and here's more from child :)" << endl;
}

void greeting() {
    cout << "Hello from Child!" << endl;
}

