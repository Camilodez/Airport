#ifndef AIRPORT_H
#define AIRPORT_H

#include <string> 
class Airport {
private:
    std::string name;
    std::string code;
    double lat;
    double lon;

public:
    Airport(); 
    Airport(const std::string& name, const std::string& code, double lat, double lon);
    ~Airport(); 

   
    std::string getName();
    std::string getCode();
    float getLat();
    float getLon();

   
    void setName( std::string name);
    void setCode( std::string code);
    void setLat(double lat);
    void setLon(double lon);
};

#endif // AIRPORT_H
