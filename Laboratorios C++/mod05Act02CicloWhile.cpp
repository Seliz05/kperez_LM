#include <iostream>
using namespace std;

int main()
{

    int numeroVeces = 1; //definición de variables
    string nombre;
    string apellido;

    cout <<"Ingrese su nombre: "; //entrada de valores
    cin >> nombre; //captura de valores

    cout <<"Ingrese su apellido: ";
    cin >> apellido;

    //se utiliza el ciclo While para crear un limite de cuantas veces se quiere correr el ciclo 
    //ya que el mismo va a correr hasta que se cumpla la condición
    while( numeroVeces <= 10) //ciclo que va a permitir que se imprima 10 veces "Hola" y el nombre y apellido del usuario
    {
        numeroVeces = numeroVeces + 1;

        cout <<"Hola "<< nombre <<" "<< apellido<< endl; //mensaje a imprimir

    }
    return 0;
}