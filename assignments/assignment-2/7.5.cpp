#include <iostream>

using namespace std;

int main(void) {
    char* oddOrEven = "Never odd or even";
    // 7.5.1
    char* nthCharPtr = &oddOrEven[5];
    // 7.5.4
    char** pointerPtr = &nthCharPtr;

    // special case, prints string up to \0
    cout << "nthCharPtr: " << nthCharPtr << endl; 
    // 7.5.2
    cout << "nthCharPtr - 1: " << *(nthCharPtr-1) << endl;
    // 7.5.3
    cout << "nthCharPtr: (blank char)" << *nthCharPtr << endl;
    // 7.5.5
    cout << "pointerPtr: " << *pointerPtr << endl;
    // 7.5.6
    cout << "pointerPtr: (blank char)" << *(*pointerPtr) << endl;
    // 7.5.7
    cout << "nthCharPtr: " << *(nthCharPtr+1) << endl;
    // 7.5.8 - pointers do this arthmetic automatically
    cout << "distance from nthCharPtr to start of" \
        " oddOrEven: " << nthCharPtr - oddOrEven << endl;

    return 0;
}

