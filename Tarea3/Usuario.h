#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
using namespace std;

class Usuario{    
private:
    string correo;
    string contraseña;
public:
    
    Usuario();
    
   string getCorreo();
   string getContraseña();
   
   void setCorreo(string);
   void setContraseña(string);
   
   virtual ~Usuario();
};


#endif 

