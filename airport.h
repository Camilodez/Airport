#ifndef AIRPORT_H
#define AIRPORT_H

#include <string> 
class Airport {
private:
    std::string name;
    std::string code;
    float lat;
    float lon;

public:
    Airport(); 
    Airport(const std::string& name, const std::string& code, float lat, float lon);
    ~Airport(); 

   
    std::string getName() const;
    std::string getCode() const;
    float getLat() const;
    float getLon() const;

   
    void setName(const std::string& name);
    void setCode(const std::string& code);
    void setLat(float lat);
    void setLon(float lon);
};

#endif // AIRPORT_H
