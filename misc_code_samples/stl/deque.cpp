#include <iostream>
#include <deque>
#include <array>
#include <algorithm>
//#define NDEBUG
#include <cassert>

int main(void) {
    auto d = new std::deque<int>(1000, 1);

    std::cout << d->size() << std::endl;

    std::array<int, 1000> a;
    a.fill(10);
    std::cout << a.size() << std::endl;

    int count = 0;
    for(auto &i : a) {
        d->push_front(i);
        count++;
    }
    assert(count == 1000);

    d->push_front(99);
    std::cout << d->front() << std::endl;
    d->push_back(999);
    std::cout << d->back() << std::endl;

    delete d;
    return 0;
}
