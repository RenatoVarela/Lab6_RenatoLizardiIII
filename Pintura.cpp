#include "Pintura.h"

using namespace std;

Pintura::Pintura(){
   

}


Pintura::Pintura(string transmisor1, string ruedas1){

      color = transmisor1;
      acabado = ruedas1;
}




string Pintura::getAcabado(){
    return acabado;
}




    void Pintura::setAcabado(string ruedas2){
        acabado = ruedas2;

    }

    string Pintura::getColor(){
        return color;

    }


    void Pintura::setColor(string transmisor2){

            color = transmisor2;
    }


    string Pintura::toString(){
        cout<<color << " , " << acabado <<endl;

        return "";


    }