#include "node.h"


template <typename T>
Node<T>::Node() {}


template <typename T>
Node<T>::Node(T datum, std::list<T> Edges) {
    this->datum = datum;
    this->Edges = Edges;
}

template <typename T>
Node<T>::~Node() {}

template <typename T>
T Node<T>::getDatum(){
    
    return datum;
}

template <typename T>
void Node<T>::setDatum(T datum){

    this->datum = datum;
}

template <typename T>
std::list<T> Node<T>::getEdges(){
    return Edges;
}

template <typename T>
void Node<T>::setEdges(std::list<T> Edges){

    this->Edges = Edges;
}

template <typename T>
std::string Node<T>::getName(){
    return name;
}

template <typename T>
void Node<T>::setName(std::string name){

    this->name = datum.getCode();
}
