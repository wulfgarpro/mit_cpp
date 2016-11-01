#include <iostream>

using namespace std;

enum COLORS { BLUE, RED, GREEN };

int main(void) {
    COLORS blue = BLUE;

    switch(blue) {
        case BLUE : 
            {
                cout << "blue";                        
                break;
            }
        case RED : 
            {
                cout << "blue";                        
                break;
            }
        case GREEN : 
            {
                cout << "blue";                        
                break;
            }
        default:
            cout << "not found";
    }

}

