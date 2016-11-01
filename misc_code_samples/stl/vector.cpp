#include <vector>
#include <iostream>

std::vector<char> v = { 'c', 'h', 'a', 'r' };

void check_vector() {
    std::cout << v.size() << std::endl;
    std::cout << v.max_size() << std::endl;
    // capacity will automatically double when size reaches current capacity
    std::cout << v.capacity() << std::endl;
} 

int main(void) {
    check_vector(); // capacity 4

    v.push_back('r');
    check_vector(); // capacity 8

    v.push_back('a');
    v.push_back('h');
    v.push_back('c');
    v.push_back('c');
    check_vector(); // capacity 16

    for(auto it = v.begin(); it != v.end(); it++) {
        std::cout << *it << std::endl;
    }

    return 0;
}
