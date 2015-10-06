#include <iostream>

using namespace std;

int main(void) {

    /* playing with double char pointer or array of strings */

    // array of strings
    char *names[] = {"james", "peter"};

    // mem address of first element in first string of array
    cout << names << endl;
    // ^^^^ same as
    cout << &names[0] << endl;
    // dereferences first element (string) of array
    cout << *names << endl;
    // ^^^^ same as
    cout << names[0] << endl;
    // first char in first string
    cout << *names[0] << endl;
    // ^^^^ same as
    cout << names[0][0] << endl;
    // ^^^^ which is same as
    cout << **names << endl;

    return 0;
}

