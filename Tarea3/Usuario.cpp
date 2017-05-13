#include "Usuario.h"

Usuario::Usuario() {
    this->correo = "";
    this->contraseña = "";
}

string Usuario::getCorreo(){
    return "";   
}

string Usuario::getContraseña(){
    return "";   
}

void Usuario::setCorreo(string c) {
    this->correo = c;
}

void Usuario::setContraseña(string p) {
    this->contraseña = p;
} 

Usuario::~Usuario() {
 
}