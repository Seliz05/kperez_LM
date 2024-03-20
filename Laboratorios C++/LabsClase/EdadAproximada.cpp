#include <iostream>
using namespace std;

int main()
{
    //Definición de variables
    int anoNacido;
    int anoActual;
    int edad;
    
    //Entrada de valores
    cout <<"Ingrese el año en que nació: ";
    cin >> anoNacido;

    cout <<"Ingrese el año actual: ";
    cin >> anoActual;

    //Proceso
    edad = anoActual - anoNacido;

    //Salida de valores
    cout <<"Su edad es de "<< edad <<" años." << endl;

    return 0;

}