using System;

namespace EjemplosSeleccionSimple2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Ingrese la nota del estudiante (0-20): "); //entrada de valores
            double nota = double.Parse(Console.ReadLine()); //definicion de variable

            if (nota >= 11) //el mensaje que es imprimido si la condicion se cumple
            {
                Console.WriteLine("El estudiante ha aprobado la prueba.");
            }

            if (nota < 11)
            {
                Console.WriteLine("El estudiante no ha aprobado la prueba.");
            }
        }
    }
}
