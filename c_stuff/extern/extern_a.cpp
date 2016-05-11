#include <stdio.h>

/**
 * This program demonstrates c's extern
 */

// you don't have to explicitly qualify with extern (it's implicit)
extern void go();
int val = 10;

int main(void) {
    int i = 5;
    while(i > 0) {
        printf("val is: %d\n", val);

        // we know this is defined somewhere (see extern_b.cpp)
        go();
        i--;
    }
    return 0;
}

