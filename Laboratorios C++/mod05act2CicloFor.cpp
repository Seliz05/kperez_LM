#include <iostream>
using namespace std;

int main()
{
    int i; //definición de variables
    string nombre;
    string apellido;

    cout <<"Ingrese su nombre: "; //entrada de valores
    cin >> nombre; //captura de valores

    cout <<"Ingrese su apellido: ";
    cin >> apellido;

    //se utiliza el ciclo For ya que se sabe cuantas veces se desea imprimir el mensaje
    for(i = 1; i <= 10; i++) //ciclo que va a permitir que se imprima 10 veces "Hola" y el nombre y apellido del usuario
    {
        cout <<"Hola "<< nombre <<" "<< apellido<< endl; //mensaje a imprimir
    }
    return 0;
}