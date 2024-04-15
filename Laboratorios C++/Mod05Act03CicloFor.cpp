#include <iostream>
using namespace std;

int main()
{
    int i;//definicion de variables
    string nombreMes;
    float temperaturaMes;
    float sumaTemperatura;
    float promedio;

    for(i = 1; i <= 12; i++)//ciclo que permite imprimir el bloque de codigo hasta que se cumpla la condicion
    {
        cout <<" Mes #" << i <<endl;//mensaje a imprimir

        cout <<"Ingrese el nombre del mes : ";//entrada de datos
        cin >> nombreMes;//captura de datos

        cout <<"Ingrese la temperatura del mes de " << nombreMes << " : ";//entrada de datos
        cin >> temperaturaMes;//capturade datos

        sumaTemperatura = sumaTemperatura + temperaturaMes; //suma de todas las temperaturas de cada mes
    }
    promedio = sumaTemperatura / 12;// division de la suma de todas las temperaturas entre los 12 meses

    cout <<"La temperatura promedio entre los 12 meses es de " << promedio <<endl;//mensaje a imprimir

    return 0;
}