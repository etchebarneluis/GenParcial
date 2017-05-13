#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include <string>
#include <iostream>
using namespace std;

class Departamento {

private:
    char letra; //SACAR LA PRIMER LETRA DE MATRICULA
    string matricula;
    string nombre;
    
public:
    
    Departamento();
    
    char getLetra();
    string getMatricula();
    string getNombre();
    
    void setLetra(char);
    void setMatricula(string);
    void setNombre(string);
    
    ~Departamento();
};

#endif 

