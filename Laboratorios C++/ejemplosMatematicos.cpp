#include <iostream>
using namespace std;

int main()
{
    double num1, num2, media;

    cout << "Introduzca el primer número: ";
    cin >> num1;

    cout << "Introduzca el segundo número: ";
    cin >> num2;

    media = (num1 + num2)/2;

    cout << "La madia es: " << media << endl;

    return 0;
}