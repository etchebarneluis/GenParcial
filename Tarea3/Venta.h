#ifndef VENTA_H
#define VENTA_H

#include <string>
#include <iostream>
using namespace std;

class Venta: public Aviso {

private:
    float precioV;
    
public:
    
    Venta();
    
    float getPrecioV();
    
    void setPrecioV(float);
    
    ~Venta();
};

#endif 

