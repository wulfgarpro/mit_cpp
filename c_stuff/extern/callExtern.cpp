#include <stdio.h>

static int val;
void go() {
    val++;
    printf("val is: %d", val); // val is accessible since it's extern'd
}

