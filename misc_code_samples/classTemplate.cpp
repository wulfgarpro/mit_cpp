#include <iostream>
#include <string>

using namespace std;

// A
// -------------------------------------------------------------------
// can have many type args, T, U, etc.
template <typename T=int> // defaults are available for class template
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
// -------------------------------------------------------------------

// B
// -------------------------------------------------------------------
template <typename T>
class Point {
    public:
        Point(T a, T b) : m_a(a), m_b(b) {};
        int a() {return m_a;}
        int b() {return m_b;}
    private:
        T m_a, m_b;
};

// this is a specialization of the above
template <>
class Point<int> {
    public:
        Point(int a, int b) : m_a(a+50), m_b(b) {};
        int a() {return m_a;}
        int b() {return m_b;}
    private:
        int m_a, m_b; // some kind of specialization
};
// -------------------------------------------------------------------

// C
// -------------------------------------------------------------------
// this parameterizes on a regular type (int)
template <typename T, int N>
class ArrayContainer {
    public:
        set(T obj, int n) { arr[n] = obj; }
        T get(int n) { return arr[n]; }
    private:
        T arr[N];
};
// -------------------------------------------------------------------

int main(void) {
    // 3 examples of using difference template classes

    // A
    // -------------------------------------------------------------------
    Person<int> me(28);
    Person<> someone(20); // default type used
    Person<double> her;

    cout << "age of me: " << me.age() << endl;
    cout << "age of someone: " << someone.age() << endl;
    cout << "age of her: " << her.age() << endl;
    // -------------------------------------------------------------------

    // B
    // -------------------------------------------------------------------
    Point<double> p1(1.0, 2.0);
    Point<int> p2(3, 4); // this is a specialization of the generic template
                         // which adds 50 to a in the constructor

    cout << p1.a() << ", " << p1.b() << endl; 
    cout << p2.a() << ", " << p2.b() << endl; 
    // -------------------------------------------------------------------

    // C
    // -------------------------------------------------------------------
    ArrayContainer<string, 2> arr; 
    arr.set("james", 0);
    arr.set("cherie", 1);

    cout << arr.get(0) << endl;
    cout << arr.get(1) << endl;
    // -------------------------------------------------------------------
    
    return 0;
}

