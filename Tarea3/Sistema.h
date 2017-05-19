#ifndef SISTEMA_H
#define SISTEMA_H

#include "DtDireccion.h"
#include "DtZona.h"
#include "DtEdificio.h"
#include "DtDepartamento.h"
#include <string>
#include <iostream>
using namespace std;

class Sistema{

public:
    
    Sistema();
    
    void ingresarInmobiliaria(string,DtDireccion,string); //ALTA INMOBILIARIA
    
    DtDepartamento** listarDepartamentos();
    DtZona** listarZonas(string);
    void selectZona(int);
    DtEdificio** listarEdificios();
    void ingresarEdificio(string,int,float);
    void selectEdificio(string);
    bool fijarAlquiler(float);
    void fijarVenta(float);
    int altaApto(int,int,int,int,bool,DtDireccion,float);
    int altaCasa(int,int,int,bool,DtDireccion,float,float);
    
    ~Sistema();
};


#endif

