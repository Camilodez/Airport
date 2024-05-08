#ifndef NODE_H
#define NODE_H


#include "edge.h"
#include "airport.h"
#include <list>

template <typename T>
class Node {
private:
    T datum; 
    std::list<T> Edges;
    std::string name;
public:

    Node(); 
    Node(T datum, std::list<T> Edges);
    ~Node(); 

    T getDatum();
    void setDatum(T datum); 

    std::list<T> getEdges();
    void setEdges(std::list<T> Edges);

    std::string getName();
    void setName(std::string name);



};
#endif // NODE_H