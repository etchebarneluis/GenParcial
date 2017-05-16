#include "Zona.h"

Zona::Zona() {
    this->codigo = 0;
    this->nombre = "";
    this->departamento = NULL;
}

int Zona::getCodigo(){
    return codigo;
}

string Zona::getNombre(){
    return nombre;
}
    
void Zona::setCodigo(int c){
    this->codigo = c;
}
    
void Zona::setNombre(string n){
    this->nombre = n;
}


Zona::~Zona() {
    delete departamento;
}