#include <iostream>
using namespace std;

int main()
{
    //Definición de variables
    float base;
    float altura;
    float area;

    //Entrada de valores
    cout <<"Ingrese la base del rectángulo: ";
    cin >> base;

    cout <<"Ingrese la altura del rectángulo: ";
    cin >> altura;
    
    //Proceso
    area = base * altura;
    
    //Salida de valores
    cout <<"El area del rectángulo es de " << area <<endl;

    return 0;

}