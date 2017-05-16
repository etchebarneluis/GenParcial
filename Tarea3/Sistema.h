#ifndef SISTEMA_H
#define SISTEMA_H

#include "Direccion.h"
#include "Zona.h"
#include "Edificio.h"
#include "Departamento.h"
#include <string>
#include <iostream>
using namespace std;

class Sistema{

public:
    
    Sistema();
    
    void ingresarInmobiliaria(string,Direccion,string); //ALTA INMOBILIARIA
    
    Departamento** listarDepartamentos();
    Zona** listarZonas(string);
    void selectZona(int);
    Edificio** listarEdificios();
    void ingresarEdificio(string,int,float);
    void selectEdificio(string);
    void fijarAlquiler(float);
    void fijarVenta(float);
    int altaApto(int,int,int,int,bool,Direccion,float);
    int altaCasa(int,int,int,bool,Direccion,float,float);
    
    ~Sistema();
};


#endif

