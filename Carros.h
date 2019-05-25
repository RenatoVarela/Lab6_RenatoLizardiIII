#ifndef CARROS_H
#define CARROS_H


#include "Pintura.h"
#include "Chasis.h"
#include "Motor.h"

#include <string.h>
#include <iostream>
using std::string;


class Carros{


    public:

    string nombre = "", modelo = "";
    Chasis* chasis = new Chasis();
    Motor* motor = new Motor();
    Pintura* pintura = new Pintura();


    public:

    Carros();
    Carros(string,string,Chasis*,Motor*,Pintura*);

    string getNombre();
    void setNombre(string);

    string getModelo();
    void setModelo(string);

    Chasis* getChasis();

   // void setChasis();

    Motor* getMotor();

    Pintura* getPintura();

    string toString();








    








};

#endif
