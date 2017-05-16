#include "Aviso.h"
#include "Alquiler.h"

Alquiler::Alquiler() : Aviso() {
    this->precioA = 0;
}

float Alquiler::getPrecioA(){
    return precioA;   
}

void Alquiler::setPrecioA(float e) {
    this->precioA = e;
}

Alquiler::~Alquiler() {
 
}
