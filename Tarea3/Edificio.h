#ifndef EDIFICIO_H
#define EDIFICIO_H

#include <string>
#include <iostream>
using namespace std;

class Edificio {

private:
    string nomEdificio;
    int cantPisos;
    float gastosComunes;
    
public:
    
    Edificio();
    
    string getNomEdificio();
    int getCantPisos();
    float getGastosComunes();
    
    void setNomEdificio(string);
    void setCantPisos(int);
    void setGastosComunes(float);
    
    ~Edificio();
};

#endif 
