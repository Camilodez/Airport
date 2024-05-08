#include "graph.h"

template <typename T>
Graph<T>::Graph() {}

template <typename T>
Graph<T> ::Graph(std::list<T> nodes) {
    this->nodes = nodes;
}

template <typename T>
Graph<T>::~Graph() {}

template <typename T>
std::list<T> Graph<T>::getNodes() {
    return nodes;
}

template <typename T>
void Graph<T>::setNodes(std::list<T> nodes) {
    this->nodes = nodes;
}