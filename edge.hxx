#include "edge.h"


Edge::Edge(std::string id, double weight){}


Edge::~Edge() {
    
}


double Edge::getWeight(){
    return weight;
}



std::string Edge::getId(){
    return id;
}


void Edge::setId(std::string id){
    this->id = id;
}


void Edge::setWeight(double x1, double x2, double y1, double y2) {
    this->weight = Edge::calculateWeight(x1, x2, y1, y2);
}


double Edge::calculateWeight(double x1, double x2, double y1, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
