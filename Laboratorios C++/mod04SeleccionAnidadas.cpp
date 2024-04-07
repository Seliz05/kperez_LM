#include <iostream>
using namespace std;

int main()
{
    char miembroTeatro; //definicion de variables
    int numeroEntradas;

     cout << "Ingrese la cantidad de entradas compradas: ";//entrada de datos
    cin >> numeroEntradas; //captura de datos
    
    cout << "Indique si es miembro del teatro ('Y' si lo es y 'N' si no lo es): ";
    cin >> miembroTeatro;

    if (miembroTeatro == 'Y') //se evalua primero esta condición y depende de si se cumple o no sigue con las próximas condiciones
    {
        if (numeroEntradas > 5) //si esta no se cumple sigue con la próxima
        {
            cout <<"A usted le aplica un descuento de 15%.";
        }
        
        else
        {
            cout <<"A usted le aplica un descuento de 10%."; //si esta no se cumple sigue con la próxima
        }
    }

    else //si esta no se cumple sigue con la próxima
    {
        if (numeroEntradas > 10)
        {
            cout <<"A usted le aplica un descuento de 5%."; //si esta no se cumple sigue con la próxima
        }

        else //si ninguna de las anteriores se cumple este mensaje se imprime
        {
            cout <<"A usted no le aplica ningun descuento.";
        }
    }
    
    return 0;
}