#include <iostream>
using namespace std;

int main()
{
    int tipoInstrumento; //Definicion de variable

    cout <<"Lista de instrumentos:" <<endl; //Opciones para que el usuario escoja e ingrese
    cout <<"1. Guitarra" <<endl;
    cout <<"2. Piano" <<endl;
    cout <<"3. Bateria" <<endl;
    cout <<"4. Violin" <<endl;
    cout <<"5. Flauta" <<endl;
    cout <<"------------------------" <<endl;
    cout <<"Ingrese el tipo de instrumento que desee:";  //Entrada de valores
    cin >> tipoInstrumento; //Captura de valores

    switch(tipoInstrumento)
    {
        case 1: //Guitarra
            cout <<"El descuento de las Guitarras es del 10%" << endl;
            break;

        case 2: //Piano
            cout <<"El descuento de los Pianos es del 15%" << endl;
            break;

        case 3: //Batería
            cout <<"El descuento de las Baterias es del 20%" << endl;
            break;

        case 4: //Violín
            cout <<"El descuento de los Violines es del 12%" << endl;
            break;

        case 5: //Flauta
            cout <<"El descuento de las Flautas es del 8%" << endl;
            break;

        default: //En caso de que el usuario ingrese una opción no válida
            cout <<"Instrumento no reconocido. Intente de nuevo." << endl;
    }

    return 0;
}