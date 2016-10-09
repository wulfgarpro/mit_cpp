#include <map>
#include <vector>

class Graph {
    private:
        std::map<int, std::vector<int>>* graph;
    protected:
    public:
        Graph(const std::vector<int> &starts, const std::vector<int> &ends);
        ~Graph() { delete graph; };
        int numOutgoing(const int nodeID) const;
        const std::vector<int>& adjacent(const int nodeID) const;
};
