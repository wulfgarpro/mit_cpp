#include <stdio.h>

extern int val;

void go() {
    val++;
    printf("val is: %d\n", val);
}

