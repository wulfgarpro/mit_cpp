#include <iostream>

using namespace std;

int main(void) {
    int arg1;
    arg1 = -1;

    // block declaration
    {
        char arg1 = 'A';
        cout << arg1 << "\n";
    }
          
    // arg1 is different outside of block
    cout << arg1 << endl;   

    return 0;
}
