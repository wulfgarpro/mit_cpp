#include <iostream>

using namespace std;

// first dimension as arg to function also optional, second not
void getDimension(const int myB[][4]) {
    cout << sizeof(myB) << endl;
    cout << sizeof(*myB) << endl;
    //cout << sizeof(myB)/sizeof(*myB) << endl;
}

int main (void) {
    int myA[] = { 1, 2, 3 };
    cout << "size of int in bytes: " << sizeof(int) << endl;
    // *myA return byte size of element [0] in myA
    cout << "size of element myA[0] in bytes: " << sizeof(*myA) << endl;
    // myA return byte size of all elements in myA
    cout << "size of all elements myA in bytes: " << sizeof(myA) << endl;
    cout << "element count in myA: " << sizeof(myA)/sizeof(*myA) << endl;

    cout << "----" << endl;

    // first dimension is optional, second not
    int myB[2][4] = {{1,2},{3,4}};
    cout << "size of int in bytes: " << sizeof(int) << endl;
    // *myB returns bytes size of all sub arrays
    cout << "size of element myB[0] in bytes: " << sizeof(*myB) << endl;
    // returns size of 
    cout << "size of all elements myB in bytes: " << sizeof(myB) << endl;
    cout << "element count in myB: " << sizeof(myB)/sizeof(*myB) << endl;

    //getDimension(myB);

    return 0;  
}
