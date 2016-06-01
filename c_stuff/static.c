#include <stdio.h>
#include <assert.h>

/*
 * A "translation unit" is for all intents and purposes a file (.c/.cpp), AFTER it's finished 
 * including all of the header files (object file)
 *
 * This example shows difference of "linkage" types:
 *      - internal: everything in scope of translation unit (file scope)
 *      - external: everything in scope of ALL translation units (program scope)
 *      - none    : only scoped where defined (local)
 */

/* 
 * This is file scope (internal linkage)
 *      - if we're using cpp classes, there is only 1
 *      copy of the static member amonst all object instances
 *      - in c, a static member isn't accessible in other files (file scope),
 *      yet there's only 1 copy of the static member for all members of  the 
 *      translation unit
 */
static int val = 0;

/*
 * This is external linkage (1 for ALL translation units), at program scope
 */
int iVal = 0;

int count = 0;
int f() {
    /* 
     * This is file scoped
     *      - this is internal linkage, retains value amongst calls (not accessible
     *      to other translation units)
     */
    static int val = 0;
    printf("val + 1 at file scope: %d\n", ++val);
    ++count;
    assert(count == val); // test
}

/* 
 * This is file scoped and only avilable in this translation unit (internal linkage)
 */
static int ff() {
}

/*
 * This is program scope, external linkage
 */
int main(void) {
    printf("val + 1 at file scope: %d\n", ++val);

    f();
    f(); // demonstrates internal linkage

    return 0;
}
