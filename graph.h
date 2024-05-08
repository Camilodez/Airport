#ifndef GRAPH_H
#define GRAPH_H
#include <list>
#include "node.h"
template <typename T>
class Graph
{
    private:

    std::list<T> nodes;

    public:

        Graph();
        Graph(std::list<T> nodes);
        ~Graph();

        std::list <T> getNodes();
        void setNodes(std::list<T> nodes);


      

};

#endif // GRAPH_H