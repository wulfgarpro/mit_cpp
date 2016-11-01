#include <iostream>
#include <string>

// now age is an int type
typedef int age;
// like this
static age myAge = 28;

// typedef and struct in single statement
typedef struct person_t {
    std::string name;
} Person;

void growYounger() {
    while(myAge >= 1) {
        std::cout << "Now I'm: " << myAge-- << std::endl;
    }
}

int main(void) {
    growYounger();
    Person m;
    m.name = "James";
    std::cout << "Hi, my name is: " << m.name << std::endl;
    return 0;
}

