#include "Apartamento.h"

Apartamento::Apartamento() {
    this->num = "0";
    this->edificio = NULL;
}

int Apartamento::getNum(){
    return num;   
}

void Apartamento::setNum(int n) {
    this->num = n;
}

Apartamento::~Apartamento() {
    delete edificio;
}
