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
    int count = 0;
    for (auto val = this->graph->cbegin(); val != this->graph->cend(); val++) {
        if (val->first == nodeID) count = (*val).second.size();
    }
    return count;
}

const std::vector<int>& Graph::adjacent(const int nodeID) const {
    for (auto val = this->graph->cbegin(); val != this->graph->cend(); val++) {
        if (val->first == nodeID) {
            return (*val).second; 
        }
    }
}
