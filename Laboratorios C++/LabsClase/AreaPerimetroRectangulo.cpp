#include <iostream>
using namespace std;

int main()
{
    //Definición de variables
    float base;
    float altura;
    float area;
    float perimetro;

    //Entrada de valores
    cout <<"Ingrese la base del rectángulo: ";
    cin >> base;

    cout <<"Ingrese la altura del rectángulo: ";
    cin >> altura;

    //Proceso
    area = base * altura;

    perimetro = altura + altura + base + base;

    //Salida de valores
    cout <<"El área del rectángulo es de " << area <<" y su perímetro es de " << perimetro << endl;

    return 0;

}