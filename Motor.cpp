#include "Motor.h"

using namespace std;

Motor::Motor(){
   

}


Motor::Motor(string transmisor1, string ruedas1){

      electrico = transmisor1;
      configuracion = ruedas1;
}




string Motor::getConfiguracion(){
    return configuracion;
}




    void Motor::setConfiguracion(string ruedas2){
        configuracion = ruedas2;

    }

    string Motor::getElectrico(){
        return electrico;

    }


    void Motor::setElectrico(string transmisor2){

            electrico = transmisor2;
    }


    string Motor::toString(){
        cout<<electrico << " ; " << configuracion <<endl;

        return "";


    }