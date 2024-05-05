#include <iostream>
using namespace std;

int main()
{
    int numero;//definición de variable
    int array[numero];//definición de arreglo
    int suma = 0;//acumulador

    cout <<"Ingrese el tamaño del arreglo (1 al 10): ";//entrada de valores
    cin >> numero;//captura de datos

    //ciclo para ingresar los valores de los elementos del arreglo y sumar los valores del mismo 
    for(int i = 0; i < numero; ++i)
    {
        cout <<"Ingrese el valor para la posición "<< i + 1 <<" del arreglo: ";//entrada de valores
        cin >> array[i];//captura de datos

        suma += array[i];//proceso matemático
    }

    cout <<"La suma de los valores que se encuentran en el arreglo es de: " << suma <<endl;//mensaje a imprimir con el resultado de la suma

    return 0;
}