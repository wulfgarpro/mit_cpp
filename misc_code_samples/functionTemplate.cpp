#include <iostream>

using namespace std;

// overloading functions like this is tiresome
int a(int a) {
    cout << "a int" << endl;
    return a+1;
}
int a(double a) {
    cout << "a double" << endl;
    return a+1;
}

template <typename T>
T a(T a) {
    cout << "a template" << endl;
    return a+1;
}

int main(void) {
    int i = 1;
    double d = 1.0;

    cout << a(i) << endl; 
    cout << a(d) << endl;

    int p = a<char>('a');
    char c = p;
    cout << p << endl;
    cout << c << endl;

    return 0;
}

