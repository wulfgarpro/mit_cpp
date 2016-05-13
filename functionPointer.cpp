#include <iostream>
#include <string.h>

void hello(std::string name) {
    std::cout << "Hello " << name << std::endl;
}

void sayHello(std::string name, void (*helloPtr)(std::string)) {
    helloPtr(name);
}

int main(void) {
    sayHello("James", &hello);

    return 0;
}
