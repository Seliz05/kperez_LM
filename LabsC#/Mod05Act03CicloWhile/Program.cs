using System; //saber la temperatura promedio entre los 12 meses

namespace Mod05Act03CicloWhile
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int i = 1; //definicion de variables
            float sumaTemperatura;
            float promedio;
            
            //ciclo que permite imprimir el bloque de codigo dentro de las llaves hasta que se cumpla la condicion
            while(i <= 12)
            {
                

                Console.WriteLine("Mes # " + i);//mensaje a imprimir 

                Console.Write("Ingrese el nombre del mes : ");//entrada de valores
                string nombreMes = Console.ReadLine();

                Console.WriteLine("Ingrese la temperatura del mes " +nombreMes+ " : ");//entrada de valores
                float temperaturaMes = float.Parse(Console.ReadLine());

                
                i = i + 1; // suma de la variable i

               // sumaTemperatura = sumaTemperatura + temperaturaMes; //suma de todas las temperaturas
                sumaTemperatura += temperaturaMes;
            }

            promedio = sumaTemperatura / 12; //division de la suma de las temperaturas entre 12

            Console.WriteLine("La temperatura promedio entre los 12 meses es de " +promedio); //mensaje a imprimir
        }
    }
}