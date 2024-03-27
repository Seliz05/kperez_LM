using System; //programa para saber la antigüedad de un empleado y si cualifica para el bono de $1000 o no.

namespace Mod04Act01
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Ingrese la antigüedad del empleado (en años): "); //entrada de valores
            int antiguedad = int.Parse(Console.ReadLine()); //definicion de variable

            if (antiguedad >= 5) //condicion si la antigüedad del empleado es más o igual a 5 años o menos 
            {
                Console.WriteLine("Es elegible para el bono, recibirá $1000.");
            }

            if (antiguedad < 5)
            {
                Console.WriteLine("El empleado no es elegible para el bono.");
            }
        }
    }
}