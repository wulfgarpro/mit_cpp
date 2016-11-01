#include <iostream>
#include <string>

using namespace std;

class MyClass {
public:
    // const property
    string name = "James";
    // const function
    string getName() const;
};

// a const function promises not to mutate
string MyClass::getName() const {
    return name += " Fraser"; // compile error, const!
};

int main(void) {
    MyClass mc;
    cout << mc.getName() << endl;
    return 0;
}
