#include <iostream>
using namespace std;

int main()
{
    int i;
    int sumaCalificaciones = 0; // definicion de variable del acumulador
    int promedio; //definición de variable
    string nombreEstudiante;//definición de variable
    int calificacionEstudiante;//definición de variable

    for(i = 1; i <= 10; i++)// ciclo de for que va a sumar las calificsciones del grupo de los 10 estutiantes  
    {
        cout << "Estudiante #" << i << ": " <<endl;

        cout << "Ingrese el nombre del estudiante: "; //entrada de valores
        cin >> nombreEstudiante; //captura de valores

        cout << "El estudiante #"<< i << " es "<< nombreEstudiante << endl;//mensaje que se muestra  

        cout << "Ingrese la puntuación de " << nombreEstudiante <<": ";//entrada de valores
        cin >> calificacionEstudiante;//captura de valores

        cout << "La calificación del estudiante " << nombreEstudiante << " es de " << calificacionEstudiante << endl;//mensaje que se muestra 

        sumaCalificaciones = sumaCalificaciones + calificacionEstudiante; // proceso matemático donde el valor va a ir incrementando
    }

    promedio = sumaCalificaciones / 10;// proceso matemático donde el valor de la suma de las calificaciones y el numero de estudiantes va a dividirse

    cout << "El promedio general de las calificaciones del grupo es: " <<promedio <<endl; //el resultado de la divición

    return 0;
}