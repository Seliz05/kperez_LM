#include <iostream>
#include <string>
using namespace std;

int main()
{
    int entero;
    float flotante;
    char caracter;
    string cadena;

    cout << "Ingrese un número entero: ";
    cin >> entero;

    cout << "Ingrese un número flotante: ";
    cin >> flotante;

    cout << "Ingrese un carácter: ";
    cin >> caracter;

    cout << "Ingrese una cadena de caracteres: ";
    cin.ignore();
    getline(cin, cadena);

    cout << entero <<"\n";
    cout << flotante <<"\n";
    cout << caracter <<"\n";
    cout <<"Los datos entrados previamente son: " << cadena <<endl;

    return 0;
}