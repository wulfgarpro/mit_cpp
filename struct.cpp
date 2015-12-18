#include <iostream>
#include <string.h>

using namespace std;

struct Person {
    int age;
    string name;
};

int main(void) {
    Person p;
    p.age = 28;
    p.name = "James Fraser";

    cout << "Hi " << p.name << ", you're " << p.age << " years old." << endl;

    return 0;
}

