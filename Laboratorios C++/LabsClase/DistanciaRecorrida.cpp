#include <iostream>
using namespace std;

int main()
{
    //Definición de variables
    double velocidad;
    double tiempo;
    double distancia;

    //Entrada de valores
    cout <<"Ingrese la velocidad promedio: ";
    cin >> velocidad;
    
    cout <<"Ingrese el tiempo recorrido: ";
    cin >> tiempo;

    //Proceso
    distancia = velocidad * tiempo;

    //Salida de valores
    cout <<"La distancia total recorrida de un viaje es de: " << distancia <<endl;

    return 0;

}