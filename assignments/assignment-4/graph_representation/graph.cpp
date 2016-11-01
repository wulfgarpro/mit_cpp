#include <iostream>
#include <vector>
#include "graph.h"
#include <stdexcept>

Graph::Graph(const std::vector<int>& starts, const std::vector<int>& ends) {
    if (starts.size() != ends.size()) throw new std::invalid_argument("Start and end vectors must be the same length.");
    for (auto i = 0; i < starts.size(); i++) {
        this->graph->insert(std::pair<int, std::vector<int>>(starts.at(i), std::vector<int>()));
        auto *key_vector = &(this->graph->at(starts.at(i)));
        key_vector->push_back(ends.at(i));
    }
}

int Graph::numOutgoing(const int nodeID) const {
    auto item = this->graph->find(nodeID);
    if (item == this->graph->end()) throw new std::invalid_argument("Specified node does not exist."); 
    return (*item).second.size();
}

const std::vector<int>& Graph::adjacent(const int nodeID) const {
    auto item = this->graph->find(nodeID);
    if (item == this->graph->end()) throw new std::invalid_argument("Specified node does not exist."); 
    return (*item).second;
}
