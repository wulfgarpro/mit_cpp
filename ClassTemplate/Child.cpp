#include <iostream>
#include <string>
#include "Super.h"
#include "Child.h"

using namespace std;

Child::Child(int number, std::string word) : Super(number, word) {    
    cout << "and here's more from child :)" << endl;
}

int main(void) {
    //Child cT1;
    Child cT2(20,"hi");
}
