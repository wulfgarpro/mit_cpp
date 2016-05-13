#include <iostream>
#include <string.h>

void Hello(std::string name) {
    std::cout << "Hello " << name << std::endl;
}

void SayHello(std::string name, void (*helloPtr)(std::string)) {
    helloPtr(name);
}

int main(void) {
    SayHello("James", &Hello);

    return 0;
}
