#include <iostream>
using namespace std;

int main()
{
    float sumaCompra; //definicion de las variables
    char membresiaVIP;

    cout << "Ingrese la suma de su compra: ";//entrada de datos
    cin >> sumaCompra; //captura de datos

    cout << "Indique si tiene la tarjeta de membresia VIP ('Y' si la tiene y 'N' si no la tiene): ";
    cin >> membresiaVIP;

    if (sumaCompra >= 150 || membresiaVIP == 'Y') //si la suma de compra es de $150 o más 
    {                                             //o si tiene la tarjeta de membresía VIP el cliente tiene derecho al descuento 
        cout << "Tiene derecho al descuento." << endl;
    }

    else //si no se cumplen ninguna de las condiciones el cliente no tiene derecho al descuento
    {
        cout << "No tiene derecho al descuento." << endl;
    }

    return 0;
}