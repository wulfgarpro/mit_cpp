#include <iostream>
#include <vector>
#include "graph.h"

int main(void) {
    const std::vector<int> start = { 1, 1, 1, 5, 5, 4 }; 
    const std::vector<int> end   = { 2, 3, 4, 4, 2, 2 }; 

    Graph g(start, end);
    return 0;
}
