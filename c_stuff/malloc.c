#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* ptr;
    ptr = (int*)malloc(sizeof(int));

    if(!ptr) return 1;

    *ptr = 25;
    printf("%d\n", *ptr);

    free(ptr);
    return 0;
}
