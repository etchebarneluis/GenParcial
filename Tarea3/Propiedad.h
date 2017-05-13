#ifndef PROPIEDAD_H
#define PROPIEDAD_H

#include "Direccion.h"
#include "Zona.h"
#include <string>
#include <iostream>
using namespace std;

class Propiedad {

private:
    int codigo;
    int cantAmb;
    int cantDorm;
    int cantBanios;
    bool garage;
    Direccion* direccion;
    float m2Edificados;
    float m2Tot;
    Zona* zona;

public:
    
    Propiedad();
    
    int getCodigo();
    int getCantAmb();
    int getCantDorm();
    int getCantBanios();
    bool getGarage();
    Direccion* getDireccion();
    float getm2Edificados();
    float getm2Tot();
    
    void setCodigo(int);
    void setCantAmb(int);
    void setCantDorm(int);
    void setCantBanios(int);
    void setGarage(bool);
    void setDireccion(Direccion*);
    void setm2Edificados(float);
    void setm2Tot(float);
    
   virtual ~Propiedad();
};

#endif 

