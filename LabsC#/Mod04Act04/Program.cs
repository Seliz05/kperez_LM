using System; //programa para saber si la tarjeta de biblioteca esta activa o inactiva para realizar préstamos.

namespace Mod04Act04
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Ingrese el estado de su tarjeta de biblioteca (activa/inactiva): ");//entrada de datos
            string estadoTarjeta = Console.ReadLine(); // deficion de variable

            if (estadoTarjeta == "activa") //condicion que se debe cumplir para imprimer el mensaje adecuado.
            {
                Console.WriteLine("Su tarjeta de biblioteca esta activa. Puede realizar préstamos.");
            }

            else 
            {
                Console.WriteLine("Su tarjeta de biblioteca esta inactiva. No puede realizar préstamos.");
            }
        }
    }
}