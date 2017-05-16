#include "Sistema.h"

Sistema::Sistema() {

}

void Sistema::ingresarInmobiliaria(string a, Direccion b, string c) {
    cout<<"La inmobiliaria se dio de alta exitosamente..."<<endl;
    return;
}

Departamento** Sistema::listarDepartamentos() {
    Departamento** dep = NULL;

    return dep;
}

Zona** Sistema::listarZonas(string d) {
    Zona** zona = NULL;

    return zona;
}

void Sistema::selectZona(int z) {
    
}

Edificio** Sistema::listarEdificios() {
    Edificio** edificio = NULL;

    return edificio;
}

void Sistema::ingresarEdificio(string a, int b, float c) {
    cout<<"El Edificio se ingreso correctamente..."<<endl;
    return;
}

void Sistema::selectEdificio(string n) {
    
}

void Sistema::fijarAlquiler(float a) {
    cout<<"Aqui se fija el precio de alquiler(setter)..."<<endl;
    return;
}

void Sistema::fijarVenta(float a) {
    cout<<"Aqui se fija el precio de venta(setter)..."<<endl;
    return;
}

int Sistema::altaApto(int a, int b, int c, int d, bool e, Direccion f, float g) {
    return 1;
}

int Sistema::altaCasa(int a, int b, int c, bool e, Direccion f, float g, float h) {
    return 0;
}

Sistema::~Sistema() {

}
