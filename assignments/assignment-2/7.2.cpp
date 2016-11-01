#include <iostream>

using namespace std;

// with & type, we're dealing with reference, not value
void swapThem(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(void) {    
    int a = 1;
    int b = 2;

    cout << "a and b are: " << a << ", " <<  b << endl;

    // do swap
    swapThem(a, b);

    cout << "after swap..." << endl;
    cout << "a and b are: " << a << ", " <<  b << endl;

    return 0;
}

