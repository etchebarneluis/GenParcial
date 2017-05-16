#include "Venta.h"

Venta::Venta() : Aviso() {
    this->precioV = 0;
}

float Venta::getPrecioV(){
    return precioV;   
}

void Venta::setPrecioV(float p) {
    this->precioV = p;
}    

Venta::~Venta() {
 
}