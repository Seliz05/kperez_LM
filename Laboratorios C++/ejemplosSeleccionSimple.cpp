#include <iostream>
using namespace std;

int main()
{
    int numero;
    //definicion de variable

    cout << "Introduce un numero: "; //entrada de valores
    cin >> numero;

    if (numero > 0) //el mensaje que es imprimido si la condicion se cumple
    {
        cout << "El numero es positivo" << endl;
    }

    return 0;
}