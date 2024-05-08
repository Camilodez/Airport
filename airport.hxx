#include "airport.h"


Airport::Airport(){}

Airport::Airport(const std::string& name, const std::string& code, double lat, double lon)
{
    this->name = name;
    this->code = code;
    this->lat = lat;
    this->lon = lon;
}

Airport::~Airport(){
    
}

std::string Airport::getName(){

    return name;
}

std::string Airport::getCode(){

    return code;
}

float Airport::getLat() {

    return lat;
}

float Airport::getLon(){

    return lon;
}

void Airport::setName( std::string name){

    this->name = name;
}

void Airport::setCode( std::string code){

    this->code = code;
}

void Airport::setLat(double lat){

    this->lat = lat;
}

void Airport::setLon(double lon){

    this->lon = lon;
}