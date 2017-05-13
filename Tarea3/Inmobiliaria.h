#ifndef INMOBILIARIA_H
#define INMOBILIARIA_H

#include "Inmobiliaria-Propiedad.h"
#include "Usuario.h"
#include <string>
#include <iostream>
using namespace std;

class Inmobiliaria : public Usuario {

private:
    string nombre;
    string ubicacion;
    Inmobiliaria_Propiedad* inmo_prop;

public:
    Inmobiliaria();
    
    string getNombre();
    string getUbicacion();
    
    void setNombre(string);
    void setUbicacion(string);
    
    ~Inmobiliaria();
};

#endif 

