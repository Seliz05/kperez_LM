#include <iostream> //programa para saber si la tarjeta de biblioteca esta activa o inactiva para realizar préstamos.
using namespace std;

int main()
{
    string estadoTarjeta; // deficion de variable

    cout <<"Ingrese el estado de su tarjeta de biblioteca (activa/inactiva): "; //entrada de datos
    cin >> estadoTarjeta; //captura de datos

    if (estadoTarjeta == "activa")  //condicion que se debe cumplir para imprimer el mensaje adecuado.
    {
        cout <<"Su tarjeta de biblioteca esta activa. Puede realizar préstamos." << endl;
    }

    else
    {
        cout <<"Su tarjeta de biblioteca esta inactiva. No puede realizar préstamos." << endl;
    }

    return 0;
}