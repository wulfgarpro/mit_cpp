#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int foobar();

int getRand() { 
    srand(time(0));
    return rand();
}

// default arg in function
void name(string name = "James") {
    cout << name << endl;
}

// using const with default arg - useful when 
// you don't want a pass by reference to be changed
void print(const long &x) {
    cout << x << endl;
}

int main(int argc, char* argv[]) {
    name(); // no arg
    name("peter");

    long number = 23456789;
    print(number);  // pass by reference so we don't 
                    // have to copy large numbers around

    cout << &number << endl;

    int a = 1;
    int &val = a;
    
    cout << val << endl;

    cout << "random number <> 0 and " << RAND_MAX << ": " << getRand() << endl;

    char* name[] = { "james" };
    cout << *name << endl;
    cout << *name[0] << endl;

    return 0;
}
