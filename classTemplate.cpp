#include <iostream>

using namespace std;

// defaults are available for class template
template <typename T=int> // can have many type args, T, U, etc.
class Person {
    public:
        Person();
        Person(T age);
        T age();
    private:
        T m_age;
};

// no defaults for function templates
template <typename T>
Person<T>::Person() : m_age(0.0) {
}

template <typename T>
Person<T>::Person(T age) : m_age(age) {
}

template <typename T>
T Person<T>::age() {
    return m_age;
}

int main(void) {
    Person<int> me(28);
    Person<double> her;

    cout << "age of me: " << me.age() << endl;
    cout << "age of her: " << her.age() << endl;

    return 0;
}

