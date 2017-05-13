#ifndef INMOBILIARIA_PROPIEDAD_H
#define INMOBILIARIA_PROPIEDAD_H

#include "Propiedad.h"
#include "Aviso.h"
#include <string>
#include <iostream>
using namespace std;

class Inmobiliaria_Propiedad{

private:
    Propiedad* propiedades[50];
    Aviso* avisos[2];

public:
    Inmobiliaria_Propiedad();
    
    
    ~Inmobiliaria_Propiedad();
};

#endif 
