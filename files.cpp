#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
    ifstream i;
    ofstream o;

    string fileName = "test.txt";
    string test;

    i.open(fileName);
    getline(i, test);
    i.close();
    cout << "FILE READS: " << test << endl;

    string append = " and some more!";
    test = test.append(append);
    cout << "appending..." << endl;

    o.open(fileName);
    o << test;
    o.close();        

    i.open(fileName);
    getline(i, test);
    i.close();
    cout << "FILE NOW READS: " + test << endl;

    return 0;
}

