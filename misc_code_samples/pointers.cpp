#include <iostream>

using namespace std;

int main (int argc, char* argv[]) {
    int x = 5;
    int* ptr = &x;
    
    cout << "x: (int)" << x << endl;
    cout << "&x (mem location of x): " << &x << endl;
    cout << "ptr (points to mem location of x): " << ptr << endl;;
    cout << "*ptr (de-reference): " << *ptr << endl;
    
    cout << "square: " << *ptr * *ptr << endl; // square

    // using a reference type
    int &y = x;
    // mem address of x
    cout << &y << endl;

    // de-reference
    cout << *(&y) << endl;
    // quicker way
    cout << y << endl;

    x = 5+5;
    // affects both since reference type
    cout << x << endl;
    cout << *(&y) << endl;

    return 0;
}

