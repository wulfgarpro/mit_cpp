#include <iostream>
#include <string.h>

using namespace std;

class Person {
    public:
        string name;

        Person() {
            name = "James";
        }
};

int main(void) {
    Person* parray = new Person[4];
    int size = (sizeof(*parray)/sizeof(parray));
    
    for(int count=0; count < size; count++) {
        cout << parray[count].name << endl;
    }

    return 0;
}

