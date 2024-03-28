#include <iostream> //programa para saber la antigüedad de un empleado y si cualifica para el bono de $1000 o no.
using namespace std;

int main()
{
    int antiguedad; //definicion de variable

    cout <<"Ingrese la antigüedad del empleado (en años): "; //entrada de valores
    cin >> antiguedad; //captura de valores

    if (antiguedad >= 5) //condicion si la antigüedad del empleado es más o igual a 5 años o menos 
    {
        cout <<"Es elegible para el bono, recibirá $1000." << endl; 
    }

    else
    {
        cout <<"El empleado no es elegible para el bono." << endl;
    }

    return 0;
}