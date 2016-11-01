#include <iostream>

using namespace std;

const int ARRAY_LEN = 10;

int main(void) {
    int arr[ARRAY_LEN] = { 10 };

    int *xPtr = arr;
    int *yPtr = arr + ARRAY_LEN - 1; // 9th index

    cout << *xPtr << ' ' << *yPtr << endl;

    return 0;
}

