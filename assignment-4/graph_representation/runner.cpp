#include <iostream>
#include <cassert>
#include <vector>
#include "graph.h"

void printAdjVals(std::vector<int>& vals) {
    for (auto val : vals) {
        std::cout << val << std::endl;
    }
}

int main(void) {
    const std::vector<int> start = { 1, 1, 1, 5, 5, 4 }; 
    const std::vector<int> end   = { 2, 3, 4, 4, 2, 2 }; 

    //std::cout << start.size() << std::endl;
    //std::cout << end.size() << std::endl;

    // test 1
    Graph* g = new Graph(start, end);
    assert(g != nullptr);

    // test 2
    std::cout << "Edges from 1: " << std::endl;
    std::cout << g->numOutgoing(1) << std::endl;
    std::cout << "Edges from 5: " << std::endl;
    std::cout << g->numOutgoing(5) << std::endl;
    std::cout << "Edges from 4: " << std::endl;
    std::cout << g->numOutgoing(4) << std::endl;

    // test 3
    std::vector<int> adj1 = g->adjacent(1);
    std::vector<int> adj5 = g->adjacent(5);
    std::vector<int> adj4 = g->adjacent(4);

    assert(adj1.size() == 3);
    assert(adj5.size() == 2);
    assert(adj4.size() == 1);

    std::cout << "Printing adjacent values for 1: " << std::endl;
    printAdjVals(adj1);
    std::cout << "Printing adjacent values for 5: " << std::endl;
    printAdjVals(adj5);
    std::cout << "Printing adjacent values for 4: " << std::endl;
    printAdjVals(adj4);

    return 0;
}
