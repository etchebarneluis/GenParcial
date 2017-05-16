#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
using namespace std;

class Usuario{    
private:
    string correo;
    string contrasenia;
public:
    
    Usuario();
    
   string getCorreo();
   string getContrasenia();
   
   void setCorreo(string);
   void setContrasenia(string);
   
   virtual ~Usuario();
};


#endif 

