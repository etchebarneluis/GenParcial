#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include"Edificio.h"
#include <string>
#include <iostream>
using namespace std;

class Apartamento: public Propiedad {

private:
    int num;
    Edificio* edificio;
public:
    
    Apartamento();
    
    int getNum();
    
    void setNum(int);
    
    ~Apartamento();
};

#endif 

