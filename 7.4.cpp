#include <iostream>

using namespace std;

// with * type, we must dereference and use lvalue pointer
void swapThem(int* &a, int* &b) {
    int* temp = a;
    a = b;
    b = temp;
}

int main(void) {    
    int a = 1;
    int b = 2;

    int* pA = &a;
    int* pB = &b;

    cout << "a and b are: " << a << ", " <<  b << endl;
    cout << "pA and pB dereferece to: " << *pA << ", " <<  *pB << endl;

    // do swap
    swapThem(pA, pB);

    cout << "after swap..." << endl;
    cout << "a and b are: " << a << ", " <<  b << endl;
    cout << "pA and pB dereferece to: " << *pA << ", " <<  *pB << endl;

    return 0;
}

