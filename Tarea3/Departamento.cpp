#include "Departamento.h"

Departamento::Departamento() {
    this->letra = "";
    this->matricula = "0";
    this->nombre = "";
}

char Departamento::getLetra(){
    return letra;   
}

string Departamento::getMatricula(){
    return matricula;   
}

string Departamento::getNombre(){
    return nombre;   
}

void Departamento::setLetra(char l) {
    this->letra = l;
}

void Departamento::setMatricula(string m) {
    this->matricula = m;
}

void Departamento::setNombre(string n) {
    this->nombre = n;
}

Departamento::~Departamento() {
 
}
