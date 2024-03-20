#include <iostream>
using namespace std;

int main()
{
    //Definición de variables
    double examen1;
    double examen2;
    double examen3;
    double examen4;
    double promedioFinal;
    
    //Entrada de valores
    cout <<"Ingrese el valor del primer examen: ";
    cin >> examen1;
    
    cout <<"Ingrese el valor del segundo examen: ";
    cin >> examen2;

    cout <<"Ingrese el valor del tercer examen: ";
    cin >> examen3;

    cout <<"Ingrese el valor del cuarto examen: ";
    cin >> examen4;
    
    //Proceso
    promedioFinal = (examen1 + examen2 + examen3 + examen4)/4;

    //Salida de valores
    cout <<"El promedio final obtenido por los examenes es de: " << promedioFinal <<endl;

    return 0;

}