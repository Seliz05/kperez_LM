#include <iostream>
using namespace std;

void totalVentasRealizadas(float ventasRealizadas);//Declaración de la Función

float sueldo;////Definir variable global para capturar la cantidad del sueldo que se calcula en la funcion e imprimirlo en el main 

int main()
{
   float ventasRealizadas;//definición de variable local que solo va capturar los datos que se ingresen en el main

   cout <<"Ingrese la cantidad de dinero que gano al realizar las ventas: ";//entrada de datos
   cin >> ventasRealizadas;//captura de datos

   totalVentasRealizadas(ventasRealizadas);//Llamada a la Función

   return 0;
}
void totalVentasRealizadas(float ventasRealizadas)//definición de la Función
{
    sueldo = ventasRealizadas * 0.15;//calculo matemático

    //mensaje a imprimir
    cout <<"El sueldo a pagar es de $" << sueldo <<endl;

}