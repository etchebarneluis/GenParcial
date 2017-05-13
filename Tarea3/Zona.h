#ifndef ZONA_H
#define ZONA_H

#include "Departamento.h"
#include <string>
#include <iostream>
using namespace std;

class Zona {

private:
    int codigo;
    string nombre;
    Departamento* departamento;
    
public:
    
    Zona();
    
    int getCodigo();
    string getNombre();
    
    void setCodigo(int);
    void setNombre(string);
    
    ~Zona();
};


#endif

