#include <iostream>
#include <string>
#include "Super.h"

using namespace std;

Super::Super() : number(0), word("") {
    cout << "created class..." << endl;

    cout << number << endl;
    cout << word << endl;
}

Super::Super(int number, std::string word) {
    cout << "created class..." << endl;
    number = number;
    word   = word;

    cout << number << endl;
    cout << word << endl;
}

