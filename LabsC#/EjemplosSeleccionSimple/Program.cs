using System;

namespace EjemplosSeleccionSimple
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Introduce un numero: "); //entrada de valores
            int numero = int.Parse(Console.ReadLine()); //definicion de variable

            if (numero > 0) //el mensaje que es imprimido si la condicion se cumple
            {
                Console.WriteLine("El numero es positivo");
            }
        }
    }
}