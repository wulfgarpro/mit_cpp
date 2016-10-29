#include <iostream>
#include <vector>
#include "graph.h"

int main(void) {
    const std::vector<int> start = { 1, 1, 1, 5, 5, 4 }; 
    const std::vector<int> end   = { 2, 3, 4, 4, 2, 2 }; 

    std::cout << start.size() << std::endl;
    std::cout << end.size() << std::endl;

    Graph* g = new Graph(start, end);
    return 0;
}
