#include <string.h>
#include <iostream>

using namespace std;
namespace MyPerson {
    class Person {
        private:
            string m_name;
        public:
            string name() {
                return m_name;
            }
            void setName(string name) {
                m_name = name; 
            }
    };
}

using namespace MyPerson;
int main(void) {
    Person me;
    me.setName("James");
    cout << me.name() << endl;
    return 0;
}
