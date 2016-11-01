#include <iostream>
#include <stdlib.h>

using namespace std;

const char* greeting = "Hello World!";

int main (int argc, char *argv[]) {
    if (argc == 1) {
        cout << "no argument given" << endl;
        return -1;
    } else if (argv[0] < 0) {
        cout << "argument must be non negative" << endl;
        return -1; 
    }

    int c = atoi(argv[1]);

    cout << "for loop: " << endl;

    for (int i = 0; i < c; i++) {
        cout << greeting << endl;
    }    

    cout << "while loop: " << endl;

    int i = atoi(argv[1]);
    while (i != 0) {
        cout << greeting << endl;
        i--;
    }

    cout << "do while loop: " << endl;

    int j = atoi(argv[1]);
    if (j != 0) {
        do { 
            cout << greeting << endl;
            j--;
        } while(j != 0);
    }

    return 0;
}

