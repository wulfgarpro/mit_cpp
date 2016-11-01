#include <iostream>

using namespace std;

int length(char* string) {

    int length = 0;
    char c = *string;
    while(c != '\0') {
       length++;
       c = *(string+length); 
    }

    return length;
}

int main(void) {
    char *name = "Jamessss";

    cout << length(name) << endl;
    return 0;
}

