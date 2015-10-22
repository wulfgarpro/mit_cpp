#include <iostream>
#include <assert.h>

/*
 * A translation unit is for all intents and purposes a file (.c/.cpp), after it's finished including all of the header files.
 */

/*
 * This example shows difference of 'linkage' types:
 *  - internal: 1 per translation unit
 *  - external: 1 per all translation units (extern)
 *  - none: only scoped where defined (that is, not even internal)
 */
using namespace std;

// This persists at file scope (internal linkage), only 1 per translation unit
//  - if we're using cpp classes, there is only 1
//    copy of the static member (file global), i.e. class memebers
//  - this static isn't accessible in other files,
//    use extern for that (program global)
static int val = 0;

int iVal = 0; /* No linkage: this is only accessible at this scope
               * not at the translation unit scope like above
               */

int count = 0;
int f() {
    // This persists at function scope
    //  - this is internal linkage
    static int val = 0;
    cout << "val + 1 at function scope: " << ++val << endl;
    ++count;
    assert(count == val); // test
}

// This persists at file scope and only 1 is avilable for all
// translation units (internal linking)
static int ff() {
}

int main(void) {
    cout << "val + 1 at file scope: " << ++val << endl;

    f();
    f(); // demonstrates internal linkage

    return 0;
}

