#include "Casa.h"

Casa::Casa() : Propiedad() {
    this->m2EspVerde = 0;
}

float Casa::getm2EspVerde(){
    return m2EspVerde;   
}

void Casa::setm2EspVerde(float e) {
    this->m2EspVerde = e;
}

Casa::~Casa() {
 
}
