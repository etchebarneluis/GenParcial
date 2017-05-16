#include "Usuario.h"

Usuario::Usuario() {
    this->correo = "";
    this->contrasenia = "";
}

string Usuario::getCorreo(){
    return "";   
}

string Usuario::getContrasenia(){
    return "";   
}

void Usuario::setCorreo(string c) {
    this->correo = c;
}

void Usuario::setContrasenia(string p) {
    this->contrasenia = p;
} 

Usuario::~Usuario() {
 
}