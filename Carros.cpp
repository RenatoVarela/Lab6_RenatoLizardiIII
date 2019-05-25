#include "Pintura.h"
#include "Chasis.h"
#include "Motor.h"
#include "Carros.h"

#include <string.h>
#include <iostream>

using namespace std;

Carros::Carros()
{
}

Carros::Carros(string nombre1, string modelo1, Chasis *chasis1, Motor *motor1, Pintura *Pintura1)
{
    nombre = nombre1;
    modelo = modelo1;
    chasis = chasis1;
    motor = motor1;
    pintura = Pintura1;
}

string Carros::getNombre()
{
    return nombre;
}
void Carros::setNombre(string nombre2)
{
    nombre = nombre2;
}

string Carros::getModelo()
{
}
void Carros::setModelo(string modelo2)
{
    modelo = modelo2;
}

Chasis *Carros::getChasis()
{
    return chasis;
}



Motor *Carros::getMotor()
{
    return motor;
}

Pintura *Carros::getPintura()
{
    return pintura;
}

string Carros::toString()
{
        cout<<"Carro: "<<nombre << " , " <<modelo << " , " <<endl<<"Chasis: "
        <<chasis->toString() <<"Motor: " <<motor->toString()<<"Pintura: " << pintura->toString() <<endl;
        cout<<"--------------------------------------------------------------------------------------";
         return "";
}