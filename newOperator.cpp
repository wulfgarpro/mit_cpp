#include <iostream>

using namespace std;

/**
 * Example of why heap is useful.
 *
 * In stack, x is out of scope after function return,
 * therefore we have dangling pointer problem where
 * contents of reference are undefined.
 */

int* heap() {
    int xx = 4;
    int *x = new int; // new allocates mem from heap
    x = &xx;
    return x;
}

int* stack() {
    int x = 5;

    /**
     * This removes warning, but same problem will
     * occur.
     
       int* y = &x;
       cout << &(*y) << endl;
    */
    
    return &x;
}

int main(void) {
    int* pI = stack(); // dangling pointer problem (warning)
    int* pII = heap(); // fix

    return 0;
}

