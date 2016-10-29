#include <iostream>
#include <vector>
#include "graph.h"

Graph::Graph(const std::vector<int> &starts, const std::vector<int> &ends) {
    if (starts.size() == ends.size()) {
        for (auto i = 0; i < starts.size(); i++) {
            this->graph->insert(std::pair<int, std::vector<int>>(starts.at(i), std::vector<int>()));
            auto key_vector = this->graph->at(starts.at(i));
            key_vector.push_back(ends.at(i));
        }
    }
    std::cout << this->graph->size() << std::endl;
}

int Graph::numOutgoing(const int nodeID) const {
    return -1;
}

const std::vector<int>& Graph::adjacent(const int nodeID) const {
}
