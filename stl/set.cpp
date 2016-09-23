#include <set>
//#define NDEBUG
#include <cassert>
#include <iostream>

int main(void) {
    std::set<int> s = { 1, 2, 3, 4, 5, 1 }; // 6 defined, but set only contains unique, so 5 are inserted
    assert(s.size() == 5);

    for(auto it = s.begin(); it != s.end(); it++) {
        std::cout << *it << std::endl;
    }

    auto f = s.find(1);
    std::cout << *f << std::endl; // find using key for set which is the value (unlike map)

    return 0;
}
