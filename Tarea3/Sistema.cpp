#include "Sistema.h"

Sistema::Sistema() {

}

void Sistema::ingresarInmobiliaria(string a, DtDireccion b, string c) {
    cout<<"La inmobiliaria se dio de alta exitosamente..."<<endl;
    return;
}

DtDepartamento** Sistema::listarDepartamentos() {
    DtDepartamento** dep = NULL;

    return dep;
}

DtZona** Sistema::listarZonas(string d) {
    DtZona** zona = NULL;

    return zona;
}

void Sistema::selectZona(int z) {
    
}

DtEdificio** Sistema::listarEdificios() {
    DtEdificio** edificio = NULL;

    return edificio;
}

void Sistema::ingresarEdificio(string a, int b, float c) {
    cout<<"El Edificio se ingreso correctamente..."<<endl;
    return;
}

void Sistema::selectEdificio(string n) {
    
}

bool Sistema::fijarAlquiler(float a) {
    cout<<"Aqui se fija el precio de alquiler..."<<endl;
    return true;
}

void Sistema::fijarVenta(float a) {
    cout<<"Aqui se fija el precio de venta..."<<endl;
    return;
}

int Sistema::altaApto(int a, int b, int c, int d, bool e, DtDireccion f, float g) {
    return 1;
}

int Sistema::altaCasa(int a, int b, int c, bool e, DtDireccion f, float g, float h) {
    return 0;
}

Sistema::~Sistema() {

}
