#ifndef CASA_H
#define CASA_H

#include <string>
#include <iostream>
using namespace std;

class Casa: public Propiedad {

private:
    float m2EspVerde;
    

public:
    
    Casa();
    
    float getm2EspVerde();
    
    void setm2EspVerde(float);
    
    ~Casa();
};

#endif 

