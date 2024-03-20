#include <iostream>
using namespace std;

int main()
{
    //Definición de variables
    float lado;
    float area;

    //Entrada de valores
    cout <<"Ingrese la longitud del lado del cuadrado: ";
    cin >> lado;

    //Proceso
    area = lado * lado;

    //Salida de valores
    cout <<"El área del cuadrado es de " << area << endl;

    return 0;

}