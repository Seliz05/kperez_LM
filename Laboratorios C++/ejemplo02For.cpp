#include <iostream>
using namespace std;

int main()
{
    int i;
    int suma=0; // definicion de acumulador

    for(i = 1; i <= 10; i++) // ciclo de for que va a sumar los numeros del 1 al 10 
    {
        suma = suma + i; // proceso matemático donde el valor va a ir incrementando
    }
    
    cout << "La suma de los números del 1 al 10 es:" << suma <<endl; //el resultado de la suma

    return 0;
}