#include <iostream>
#include <stdlib.h>

using namespace std;

/* This is 4.5 and 4.6 */

int sum(int count, int vals[]) {
    if (count == 0) {
        return 0;
    } else {

    // recurse
    int subTotal = sum(count-1, vals);
    return subTotal += vals[count-1];

    // old iterative solution
    /*int sum = 0;    
    for (int i = 0; i < count; i++) {
        sum += vals[i];
    }*/
    }
}

int main(int argc, char* argv[]) {
    int count = argc - 1; // skip first string in argv

    // add string args to int array
    int vals[count];
    for(int i = 0, j=1; i < count; i++) {
        vals[i] = atoi(argv[j++]);
    }

    int sumOfVals = sum(count, vals);
    cout << sumOfVals << endl;

    return 0;
}

