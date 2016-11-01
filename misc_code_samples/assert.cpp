#include <cassert>

int main() {
    assert(1+1==2);
    
    // this will fail and abort 
    assert(1+1!=2);

    return 0;
}
