 #include <stdio.h>

/**
 * This program demonstrates c's extern
 */
void go();

int val = 10;
int main(void) {
    printf("val is: %d", val);

    go();

    return 0;
}

