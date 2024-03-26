#include <iostream>
using namespace std;

int main()
{
    float numero;  //variable de tipo float
    int num_entero; //variable de tipo entero
    
    //entrada de valores
    cout <<"Ingrese un número entero: ";
    cin >> numero;

    //extraccion de la parte entera del numero
    num_entero = numero;

    try
    {
        if (numero != num_entero) //condicion si el numero no es igual a un numeroentero
        {
            throw "El numero ingresado no es un numero entero."; //mensaje que describe el problema
        }
        cout <<"El numero entero ingresado es: "<< numero <<endl;
    }
    catch (const char* mensaje)
    {
        cout << "Excepción capturada: " << mensaje << endl;
    }

    return 0;
}