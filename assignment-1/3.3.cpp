#include <iostream>

using namespace std;

void doubleNumber(int& num) {
    num = num * 2;
}

int main(void) {
    int num = 35;
    doubleNumber(num);
    cout << num << endl;

    return 0;
}

