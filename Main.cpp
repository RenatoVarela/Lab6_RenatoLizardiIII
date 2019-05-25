#include "Carros.h"
#include "Pintura.h"
#include "Chasis.h"
#include "Motor.h"
#include <vector>

using namespace std;

Carros *AgregarCarros();
vector<Carros *> carros;
vector<Carros *> hechos;
char **crearMatriz(int, int);
void liberarMatriz(char**& ,int);
void printMatrix(char **, int, int);

void MostrarMatriz();

char **labMatrix = NULL;
bool salir2;
int z = 0; //contador de P
int c = 0; // COntador para verificar cuantas p Hay
int fils = 0; // Cuanta al avanzar un carro

int main()
{

    labMatrix = crearMatriz(5, 4);


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            labMatrix[i][j] = '-';
        }
        
    }
    

    bool salir = false;
    int opciones = 0;

    while (salir == false)
    {
        cout << "Ingrese el una de las siguientes opciones 1)Agreagar un carro" << endl
             << "2)Avanzar " << endl
             << "3) Mostrar los autos producidos" << endl
             << "4) Mostrar Matriz" << endl
             << "5) Mostrar Matriz detallada" <<endl
             << "Para salir aprete cualquier otro" << endl;

        cin >> opciones;

        switch (opciones)
        {

        case 1:
        cout<<"nada"<<endl;
        c = 0;

            for(int i = 0; i < 5 ; i++){
              if(labMatrix[i][0] == 'P'){
                 // cout<<"si entra perro no te cagues"<<endl;
                  c++;

              }

            }


            if (c > 5)
            {
                cout<<c;
                 cout<<"actualmente esta lleno"<<endl;
              
            }else{
                  AgregarCarros();
               
            }
            

            

            break;

        case 2:

            

            for (int i = 0; i < 5; i++)
            {
                for (int j = 1; j < 4; j++)
                {
                    if (labMatrix[i][0] == 'P' && labMatrix[i][j] == '-')
                    {
                        //cout<<"si esta entrando fijate";
                        labMatrix[i][j] = 'C';
                        break;
                    }
      
                    
                }
                
            }
            

            for (int x = 0; x < 5; x++)
            {
                for (int z = 0; z < 4; z++)
                {

                    if(labMatrix[x][z] == 'C'){
                        fils++;

                    }
                    
                }

                if (fils == 3)
                {
                    cout<<"has agregado un carro"<<endl;
                    hechos.push_back(carros[x]);
                    carros.erase(carros.begin());
                    for ( int h = 0; h < 4; h++)
                    {
                        labMatrix[x][h] = '-';
                    }
                    
                    
                }

                 fils = 0;
                
            }
            





            break;

        case 3:

            printMatrix(labMatrix, 5, 4);

            for (int i = 0; i < hechos.size(); i++)
            {
                  cout<<hechos[i]->toString() <<endl; 

            }
            

            break;

        case 4:

            printMatrix(labMatrix, 5, 4);

            break;

        case 5:

            printMatrix(labMatrix, 5, 4);

            for (int i = 0; i < (carros.size()); i++)
            {
                cout<<carros[i]->toString()<<endl;
                
            }
            

            break;

        default:
        liberarMatriz(labMatrix,5);
            salir = true;

            break;
        }
    }


    liberarMatriz(labMatrix,5);
}




///Aqui se agregan los carros
Carros *AgregarCarros()
{
    
    string nombre, modelo, color, acabado, configuracion, ruedas;
    string electrico, transmision;
    //string valoElectric , valorTransmiscion;

    Carros *carro;

    cout << "Ingrese el nombre del modelo" << endl;
    cin >> nombre;


    cout << "INgrese el modelo del auto" << endl;
    cin >> modelo;

    cout << "Ingrese el color del auto" << endl;
    cin >> color;

    cout << "Ingrese el acabado del auto" << endl;
    cin >> acabado;

    cout << "Ingrese el tipo de ruedas del auto" << endl;
    cin >> ruedas;

    cout << "Ingrese 1 si tiene transmision" << endl;
    cin >> transmision;

    cout << "INgrese la configuracion del motor" << endl;
    cin >> configuracion;

    cout << "INgrese el tipo de motor" << endl;
    cin >> electrico;
    
  


    carro = new Carros(nombre, modelo, new Chasis(ruedas, transmision), new Motor(electrico, configuracion), new Pintura(color, acabado));




    labMatrix[z][0] = 'P';

    z++;

    if (z == 5)
    {
          z = 0;
    }
    

    carros.push_back(carro);

    return carro;
}




///Aqui se crea la matriz y se vacia
char **crearMatriz(int size1, int size2)
{

    char **matrix = NULL;
    matrix = new char *[size2];

    for (int i = 0; i < size1; i++)
    {

        for (int j = 0; j < size2; j++)
        {
            matrix[i] = new char[size2];
        }
    }

    return matrix;
}

void printMatrix(char **matrix, int size1, int size2)
{

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << "[";
            cout << matrix[i][j];
            cout << "]";
        }
        cout << endl;
    }
}

void liberarMatriz(char **&matrix, int size)
{

    for (int i = 0; i < size; i++)
    {

        delete[] matrix[i];
        matrix[i] = NULL;
    }

    if (matrix != NULL)
    {
        delete[] matrix;
        matrix = NULL;
    }
}
