#include <iostream>
using namespace std;

int main()
{
    int edad;
    float altura;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su altura en cm: ";
    cin >> altura;

    if (edad >= 12 && altura > 150)
    {
        cout << "Puede subirse a la montaña rusa." << endl;
    }

    else 
    {
        cout << "No puede subirse a la montaña rusa." << endl;
    }

    return 0;
}