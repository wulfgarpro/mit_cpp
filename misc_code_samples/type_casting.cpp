#include <string>
#include <iostream>

// g++ type_casting.cpp -o type_casting -std=c++11

/**
 * In c++ you can up-cast and down-cast:
 *      - Up-cast goes from dervied to parent (toward root or hierarchy)
 *      - Down-cast goes from parent to derived
 * An up-cast between two compatible types always works (implicit) BUT
 * a down-cast only works when a parent defines a pure-virtual that the derived must implement (this is collectively termed polymorphic)
 */
using std::string;

class Living {
    public:
        Living() {};
        ~Living() {};
        int age;
};

class Person : public Living {
    public:
        Person(string name, int age) : Living() { this->name = name; this->age = age;};
        ~Person() {};
        string name;
};

class Boy : public Person {
    public:
        Boy(string name, int age) : Person(name, age) {}; 
        virtual int getAge() = 0;
};

class Me : public Boy {
    public:
        Me(string name, int age) : Boy(name, age) {};
        int getAge() { return this->age; }
};

int main(void) {
    Me me("James", 28);
    std::cout << me.name << ", " << me.age << std::endl;

    Living l = me; // implicit "up-casting"
    std::cout << l.age << std::endl;

    // "static-cast" provides compile time checking but no run-time checking and is useful for reversing an implicit conversion (derived<->parent) when you know the specific type (the derived you'd like to get back to); undefined behavior occurs if you trick the compiler
    Person *p = static_cast<Person*>(&l);
    std::cout << p->age << std::endl;

    // "dynamic-cast" is useful when you don't know the object type; a dynamic cast will return a null pointer if cast fails; in order for the down-cast to work, the argument must be polymorphic (see above), otherwise a compile-time error occurs; the static cast will also throw a compile error in such a case
    Boy *b = dynamic_cast<Boy*>(&me);   // up-cast
    std::cout << b->name << std::endl;

    // a static cast here wouldn't return a null (undefined behavior)
    Me *m = dynamic_cast<Me*>(b);       // down-cast
    if(m != nullptr) {
        std::cout << m->getAge() << std::endl;
    }

    return 0;
}
