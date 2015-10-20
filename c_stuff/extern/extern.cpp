#include <stdio.h>

/**
 * This program demonstrates c's extern
 */
extern int val; // this is a declaration not a definition
void go(); // function declarations are extern'd by default

int main(void) {
    //val = 10; // val isn't defined so this will fail
    int val = 10; // this is a definition and now val can be used anywhere
    go();

    return 0;
}
