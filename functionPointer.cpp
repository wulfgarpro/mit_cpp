#include <iostream>
#include <string.h>

// C++ STYLE
class MyClass {
    private:
    protected:
    public:
        void hello(std::string name) {
            std::cout << "Hello " << name << std::endl;
        }
        void sayHello(std::string name, void (MyClass::*helloPtr)(std::string)) {
            (this->*helloPtr)(name);
        }
};

// C STYLE
void hello(std::string name) {
    std::cout << "Hello " << name << std::endl;
}
void sayHello(std::string name, void (*helloPtr)(std::string)) {
    helloPtr(name);
}

int main(void) {
    // c style
    sayHello("James", &hello);

    // c++ with this
    MyClass mc;
    mc.sayHello("James", &MyClass::hello);

    return 0;
}
