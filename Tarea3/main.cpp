#include "Alquiler.h"
#include "Apartamento.h"
#include "Aviso.h"
#include "Casa.h"
#include "DtDepartamento.h"
#include "DtDireccion.h"
#include "DtEdificio.h"
#include "Inmobiliaria-Propiedad.h"
#include "Inmobiliaria.h"
#include "Propiedad.h"
#include "Sistema.h"
#include "Usuario.h"
#include "Venta.h"
#include "DtZona.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

/*ENCABEZADOS EXTRAS*/
DtDireccion* generarDireccion();

void altaInmobiliaria();
void altaPropiedad();
void altaEdificio();

Sistema* s;

int main() {
    s = NULL;

    DtDepartamento** departamentos;

    DtZona** zona;

    DtEdificio** edificio;

    int opcion = 0;

    do {
        cout << "===== Menu ===========================" << endl;
        cout << "   1) Alta Inmobiliaria" << endl;
        cout << "   2) Alta Propiedad" << endl;
        cout << "   0) Salir" << endl;

        cout << endl << "opcion: ";
        cin >> opcion;

        string nombre, email;

        cin.clear();
        fflush(stdin);

        switch (opcion) {
            case 1:
                altaInmobiliaria();
                break;

            case 2:
                altaPropiedad();
                break;
        }
    } while (opcion != 0);

    return 0;
}

void altaInmobiliaria() {
    string nombre, email;
    cout << "===== Alta Inmobiliaria ===============" << endl;
    cout << "Nombre: ";
    getline(cin, nombre);
    cout << "email: ";
    getline(cin, email);
    s->ingresarInmobiliaria(nombre, *generarDireccion(), email);
}

void altaPropiedad() {
    cout << "===== Alta Propiedad ===============" << endl;

    string dpto;

    int z;

    DtDepartamento** departamentos = s->listarDepartamentos();

    cout << "*Lista de departamentos*" << endl;
    /*for (int i = 0; i < 5; i++) {
        cout << "----------" << endl;
        cout << "Letra: " << departamentos[i]->getLetra() << endl;
        cout << "Matricula: " << departamentos[i]->getMatricula() << endl;
        cout << "Nombre: " << departamentos[i]->getNombre() << endl;
    }*/

    cout << "Ingrese el nombre del departamento a seleccionar: ";
    getline(cin, dpto);

    DtZona** zona = s->listarZonas(dpto);

    cout << "*Lista de zonas de " << dpto << "*" << endl;
    /*for (int i = 0; i < 5; i++) {
        cout << "----------" << endl;
        cout << "Codigo: " << zona[i]->getCodigo() << endl;
        cout << "Nombre: " << zona[i]->getNombre() << endl;
    }*/

    cout << "Ingrese el codigo de la  zona a seleccionar: ";
    cin >> z;

    s->selectZona(z);

    int tipoprop = 0;

    cin.clear();
    fflush(stdin);

    cout << "===== Tipo de Propiedad ================" << endl;
    cout << "   1) Apartamento" << endl;
    cout << "   2) Casa" << endl;

    cout << endl << "opcion: ";
    cin >> tipoprop;

    cin.clear();
    fflush(stdin);

    if (tipoprop == 1) {
        DtEdificio** edificios = s->listarEdificios();


        cout << "*Lista de edificios*" << endl;
        /*for (int i = 0; i < 5; i++) {
            cout << "----------" << endl;
            cout << "Nombre: " << edificio[i]->getNomEdificio() << endl;
        }*/


        cout << "Ingrese 1 si quiere ejecutar Alta Edificio" << endl;
        int opc = 0;
        cin >> opc;
        if (opc == 1)
            altaEdificio();

        string nombreEd;
        cout << "Ingrese el nombre del edificio: ";
        cin.clear();
        fflush(stdin);
        getline(cin, nombreEd);

        s->selectEdificio(nombreEd);

        cout << "Ingrese 1 si el Apartamento esta en alquiler" << endl;
        cin >> opc;
        if (opc == 1) {
            float precioAlquiler;
            cout << "Ingrese precio: ";
            cin >> precioAlquiler;
            s->fijarAlquiler(precioAlquiler);
        }

        cout << "Ingrese 1 si el Apartamento esta en venta" << endl;
        cin >> opc;
        if (opc == 1) {
            float precioVenta;
            cout << "Ingrese precio: ";
            cin >> precioVenta;
            s->fijarVenta(precioVenta);
        }

        int codigo, nro, cantAmb, cantDorm, cantBanios;
        float m2;
        bool garage;

        cout << "=======Alta Apartamento====" << endl;
        cout << "Numero: ";
        cin>>nro;
        cout << "Cantidad Ambientes: ";
        cin>>cantAmb;
        cout << "Cantidad de Dormitorios: ";
        cin>>cantDorm;
        cout << "Cantidad de BaÃƒÂ±os: ";
        cin>>cantBanios;
        cout << "Metros Cuadrados: ";
        cin>>m2;
        int gar;
        cout << "Posee Garage???" << endl;
        cout << "   1) Si" << endl;
        cout << "   2) No" << endl;
        cout << "Opcion: ";
        cin>>gar;

        if (gar == 1) {
            garage = true;
        } else {
            garage = false;
        }

        codigo = s->altaApto(nro, cantAmb, cantDorm, cantBanios, garage, *generarDireccion(), m2);
        cout<<"Alta Apartamento Exitosa..."<<endl;
    } else {
        int opc;

        cout << "Ingrese 1 si la casa esta en alquiler" << endl;
        cin >> opc;
        bool enAlquiler=true;
        if (opc == 1) {
            float precioAlquiler;
            cout << "Ingrese precio: ";
            cin >> precioAlquiler;
            enAlquiler = s->fijarAlquiler(precioAlquiler);
        }

        cout << "Ingrese 1 si la casa esta en venta" << endl;
        cin >> opc;
        if (opc == 1 || !enAlquiler) {
            float precioVenta;
            cout << "Ingrese precio: ";
            cin >> precioVenta;
            s->fijarVenta(precioVenta);
        }
         
        int codigo, cantAmb, cantDorm, cantBanios;
        float m2edificados, m2verdes;
        bool garage;

        cout << "=======Alta Casa====" << endl;
        cout << "Cantidad Ambientes: ";
        cin>>cantAmb;
        cout << "Cantidad de Dormitorios: ";
        cin>>cantDorm;
        cout << "Cantidad de BaÃƒÂ±os: ";
        cin>>cantBanios;
        cout << "Metros Cuadrados Edificados: ";
        cin>>m2edificados;
        cout << "Metros Cuadrados Verdes: ";
        cin>>m2verdes;
        int gar;
        cout << "Posee Garage???" << endl;
        cout << "   1) Si" << endl;
        cout << "   2) No" << endl;
        cout << "Opcion: ";
        cin>>gar;

        if (gar == 1) {
            garage = true;
        } else {
            garage = false;
        }

        codigo = s->altaCasa(cantAmb, cantDorm, cantBanios, garage, *generarDireccion(), m2edificados, m2verdes);
        cout<<"Alta Casa Exitosa..."<<endl;
    }
}

void altaEdificio() {
    cout << "===== Alta Edificio ===============" << endl;

    string nombre;
    int piso;
    float gastos;

    cin.clear();
    fflush(stdin);

    cout << "Nombre: ";
    getline(cin, nombre);
    cout << "Piso: ";
    cin >> piso;
    cout << "Gastos: ";
    cin >> gastos;

    s->ingresarEdificio(nombre, piso, gastos);
}

DtDireccion * generarDireccion() {
    string pais, ciudad, numero, calle;
    cin.clear();
    fflush(stdin);
    cout << "Direccion" << endl;
    cout << "Pais: ";
    getline(cin, pais);
    cout << "Ciudad: ";
    getline(cin, ciudad);
    cout << "Calle: ";
    getline(cin, calle);
    cout << "Numero: ";
    getline(cin, numero);

    return new DtDireccion(pais, ciudad, numero, calle);
}