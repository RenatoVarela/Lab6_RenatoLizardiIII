#include "Chasis.h"

using namespace std;

Chasis::Chasis(){
   

}


Chasis::Chasis(string ruedas1 , string transmisor1){

      transmision = transmisor1;
      ruedas = ruedas1;
}




string Chasis::getRuedas(){
    return ruedas;
}




    void Chasis::setRuedas(string ruedas2){
        ruedas = ruedas2;

    }

    string Chasis::getTransmision(){
        return transmision;

    }


    void Chasis::setTransmision(string transmisor2){

            transmision = transmisor2;
    }


    string Chasis::toString(){
        cout<<transmision << " ; " << ruedas <<endl;

        return "";


    }