#include <iostream>
using namespace std;

int main()
{
    double nota; //definicion de variable

    cout << "Ingrese la nota del estudiante (0-20):"; //entrada de valores
    cin >> nota;

    if (nota >= 11) //el mensaje que es imprimido si la condicion se cumple
    {
        cout << "El estudiante ha aprobado la prueba." << endl;
    }

    else
    {
        cout << "El estudiante no ha aprobado la prueba." << endl;
    }

    return 0;
}