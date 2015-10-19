#include <iostream>

using namespace std;

// overloading functions like this is tiresome
int a(int a) {
    cout << a << endl;
}
int a(double a) {
    cout << a << endl;
}

int main(void) {
    int i = 1;
    double d = 1.0;

    a(i), a(d);

    return 0;
}

