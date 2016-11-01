#include <iostream>
#include <stdarg.h>

using namespace std;

int sum(const int a, const int b) {
  return a+b;
}

double sum(const double a, const double b) {
    return a+b;
}

// vararg function - see variadic function c++
int sum(const int count, ...) {
    if(count < 2) {
        cout << "error, sum must have at least 2 values";
        return;
    }
    va_list args;
    va_start(args, count);

    int sum = 0;
    for(int i = 0; i < count; i++) {
        sum+=va_arg(args,int);
    }

    va_end(args);

    return sum;
}

int main(void) {
    cout << sum(1,2) << endl;

    cout << sum(1.1, 2.1) << endl;

    cout << sum(1, (int)2.1) << endl; // without cast, syntax error

    cout << sum(3,1,2,3) << endl;

    return 0;
}

