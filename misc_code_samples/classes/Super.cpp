#include <iostream>
#include "Super.h"

using namespace std;

Super::Super() : number(0) {
    cout << "created class..." << endl;

    cout << number << endl;
}

Super::Super(int number) {
    cout << "created class... with number: " << number << endl;

    number = number;

    cout << number << endl;
}

void Super::greeting() {
    cout <<  "Hello from Super!" << endl;
}

