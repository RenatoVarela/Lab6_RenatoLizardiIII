#ifndef PINTURA_H
#define PINTURA_H

#include <string.h>
#include <iostream>
using std::string;





class Pintura{

    private:
    string color = "", acabado = "";


    public:
    Pintura();
    Pintura(string,string);
    string getAcabado();
    void setAcabado(string);
    string getColor();
    void setColor(string);

    string toString();










};

#endif