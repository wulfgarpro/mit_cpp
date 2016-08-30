#include <stdio.h>

/**
 * This program demonstrates c's extern.
 *
 * Extern provides external linkage, where an extern is program global
 * not file global like static (which is internal linkage).
 *
 * Extern is in also c++; other abstract types like classes and structs can
 * be used to scope a variable (property), which is NOT what extern is.
 * That is, extern is a program global useful everywhere (it's a global), a
 * scroped property is just that, a property of it's abstraction.
 * 
 * Remember a #include with a definition is including that definition in 
 * that specific translation unit.
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

