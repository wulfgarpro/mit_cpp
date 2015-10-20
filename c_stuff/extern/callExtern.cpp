#include <stdio.h>

extern int val;
void go() {
    printf("val is: %d", val); // val is accessible since it's extern'd
}

