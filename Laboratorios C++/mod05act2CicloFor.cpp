#include <iostream>
using namespace std;

int main()
{
    int i;
    string nombre;
    string apellido;

    cout <<"Ingrese su nombre: ";
    cin >> nombre;

    cout <<"Ingrese su apellido: ";
    cin >> apellido;

    for(i = 1; i <= 10; i++)
    {
        cout <<"Hola "<< nombre <<" "<< apellido<< endl;
    }
    return 0;
}