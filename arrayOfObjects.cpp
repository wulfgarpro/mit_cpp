#include <iostream>
#include <string.h>

using namespace std;

class Person {
    public:
        string name;

        Person() {
            cout << "constructor called!" << endl;
            name = "James";
        }
};

int main(void) {
    Person* parray = new Person[4]; // implicit call of Person constructor
    int size = (sizeof(*parray)/sizeof(parray));

    for(int count=0; count < size; count++) {
        cout << parray[count].name << endl;
    }

    Person* parrayB[5]; // doesn't call constructor
    parrayB[0] = new Person; // must do it manually
    Person me;
    parrayB[1] = &me;

    cout << parrayB[0]->name << endl;
    return 0;
}
