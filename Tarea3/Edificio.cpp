#include "Edificio.h"

Edificio::Edificio() {
    this->nomEdificio = "";
    this->gastosComunes = 0;
    this->cantPisos = 0;
}

string Edificio::getNomEdificio(){
    return nomEdificio;   
}

float Edificio::getGastosComunes(){
    return gastosComunes;   
}

int Edificio::getCantPisos(){
    return cantPisos;   
}

void Edificio::setNomEdificio(string n) {
    this->nomEdificio = n;
}

void Edificio::setGastosComunes(float g) {
    this->gastosComunes = g;
}


void Edificio::setCantPisos(int p) {
    this->cantPisos = p;
}

Edificio::~Edificio() {
 
}
