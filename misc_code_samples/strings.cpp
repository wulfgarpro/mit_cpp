#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    string name = "james";
    string name2 = "james2";

    cout << name << endl;

    string name3 = name.append(name2);
    
    cout << name3 << endl;

    return 0;
}

