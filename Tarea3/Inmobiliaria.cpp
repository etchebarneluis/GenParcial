#include "Inmobiliaria.h"

Inmobiliaria::Inmobiliaria()  : Usuario() {
    this->nombre = "";
    this->ubicacion = "";
    this->inmo_prop = NULL;
}

string Inmobiliaria::getNombre(){
    return nombre;   
}

string Inmobiliaria::getUbicacion(){
    return ubicacion;   
}

void Inmobiliaria::setNombre(string n) {
    this->nombre = n;
}

void Inmobiliaria::setUbicacion(string u) {
    this->ubicacion = u;
}

Inmobiliaria::~Inmobiliaria() {
    delete inmo_prop;
}