#ifndef CHASIS_H
#define CHASIS_H

#include <string.h>
#include <iostream>
using std::string;

class Chasis
{

    private:

    string ruedas = "";
    string transmision = "";


    public:

    Chasis();
    Chasis(string,string);

    string getRuedas();
    void setRuedas(string);
    string getTransmision();
    void setTransmision(string);
    string toString();
   
};

#endif