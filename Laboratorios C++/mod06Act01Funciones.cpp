#include <iostream>
using namespace std;

void totalVentasRealizadas(float ventasRealizadas);//Declaración de la Función

const int bono = 125;////Definir variable global y constante

int main()
{
   float ventasRealizadas;//definición de variable

   cout <<"Ingrese la cantidad de dinero que gano al realizar las ventas: ";//entrada de datos
   cin >> ventasRealizadas;//captura de datos

   totalVentasRealizadas(ventasRealizadas);//Llamada a la Función

   return 0;
}
void totalVentasRealizadas(float ventasRealizadas)//definición de la Función
{
    if (ventasRealizadas < 1500)//si lo que se gano en las ventas en menos del 15% no obtiene el bono
   {//mensaje a imprimir
    cout <<"No se realizó el 15% o más de ventas para obtener el bono. Usted tiene un total de $" << ventasRealizadas <<" en ventas realizadas."<<endl;
   } 
   else//si gana más del 15% obtiene un bono de $125
   {
    float sumaBonoVentas =ventasRealizadas + bono;//suma de la cantidad ganada en las ventas realizadas y el bono 
    //mensaje a imprimir
    cout <<"Usted recibió un bono de $125. Su total en ventas es de $" << ventasRealizadas<<", más el bono que suma a $" << sumaBonoVentas<<endl;
   }
}