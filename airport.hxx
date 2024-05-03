#include "airport.h"


Airport::Airport(){}

Airport::Airport(const std::string& name, const std::string& code, float lat, float lon)
{
    this->name = name;
    this->code = code;
    this->lat = lat;
    this->lon = lon;
}

Airport::~Airport(){
    
}

std::string Airport::getName() const{

    return name;
}

std::string Airport::getCode() const{

    return code;
}

float Airport::getLat() const{

    return lat;
}

float Airport::getLon() const{

    return lon;
}

void Airport::setName(const std::string& name){

    this->name = name;
}

void Airport::setCode(const std::string& code){

    this->code = code;
}

void Airport::setLat(float lat){

    this->lat = lat;
}

void Airport::setLon(float lon){

    this->lon = lon;
}