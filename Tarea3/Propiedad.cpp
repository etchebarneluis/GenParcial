#include "Propiedad.h"

Propiedad::Propiedad() {
    this->codigo = 0;
    this->cantAmb = 0;
    this->cantDorm = 0;
    this->cantBanios = 0;
    this->garage = false;
    this->direccion = NULL;
    this->m2Edificados = 0;
    this->m2Tot = 0;
    this->zona = NULL;
}

int Propiedad::getCodigo(){
    return codigo;   
}

int Propiedad::getCantAmb(){
    return cantAmb;   
}

int Propiedad::getCantDorm(){
    return cantDorm;   
}

int Propiedad::getCantBanios(){
    return cantBanios;   
}

bool Propiedad::getGarage(){
    return garage;   
}

Direccion* Propiedad::getDireccion(){
    return direccion;   
}

float Propiedad::getm2Edificados(){
    return m2Edificados;   
}

float Propiedad::getm2Tot(){
    return m2Tot;   
}

void Propiedad::setCodigo(int c) {
    this->codigo = c;
}

void Propiedad::setCantAmb(int a) {
    this->cantAmb = a;
}

void Propiedad::setCantDorm(int d) {
    this->cantDorm = d;
}

void Propiedad::setCantBanios(int b) {
    this->cantBanios = b;
}

void Propiedad::setGarage(bool g) {
    this->garage = g;
} 

void Propiedad::setDireccion(Direccion* dir) {
    this->direccion = dir;
} 

void Propiedad::setm2Edificados(float e) {
    this->m2Edificados = e;
} 

void Propiedad::setm2Tot(float t) {
    this->m2Tot = t;
} 

Propiedad::~Propiedad() {
    delete direccion;
    delete zona;
}