#ifndef SISTEMA_H
#define SISTEMA_H

#include "Direccion.h"
#include <string>
#include <iostream>
using namespace std;

class Sistema{

public:
    
    Sistema();
    
    ingresarInmobiliaria(string,Direccion,string); //ALTA INMOBILIARIA
    
    listarDepartamentos();
    listarZonas(string);
    selectZona(int);
    listarEdificios();
    ingresarEdificio(string,int,float);
    selectEdificio(string);
    fijarAlquiler(float);
    fijarVenta(float);
    int altaApto(int,int,int,int,bool,Direccion,float);
    int altaCasa(int,int,int,bool,Direccion,float,float);
    
    ~Sistema();
};


#endif

