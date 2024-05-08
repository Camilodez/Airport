#ifndef EDGE_H
#define EDGE_H

#include "node.h"
#include <cmath>
#include <string>


class Edge
{
private:
    std::string id;
    double weight;
    
public:
    Edge();
    Edge(std::string id, double weight);
    ~Edge();

    double getWeight();
    void setWeight(double weight);

    std::string getId();
    void setId(std::string id);
  
    double calculateWeight(double x1, double x2, double y1, double y2);

    void setWeight(double x1, double x2, double y1, double y2); 
    static double calculateWeight(double x1, double x2, double y1, double y2);
    
    
    
    };




#endif // EDGE_H