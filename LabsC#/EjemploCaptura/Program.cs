using System;

namespace EjemploCaptura
{
    internal class Program
    {
        static void Main()
        {
            Console.Write("Ingrese un número entero: ");
            int entero = int.Parse(Console.ReadLine());

            Console.Write("Ingrese un número flotante: ");
            float flotante = float.Parse(Console.ReadLine());

            Console.Write("Ingrese un carácter: ");
            char caracter = char.Parse(Console.ReadLine());

            Console.Write("Ingrese una cadena de caracteres: ");
            string cadena = Console.ReadLine();

            Console.WriteLine(entero);
            Console.WriteLine(flotante);
            Console.WriteLine(caracter);
            Console.WriteLine(cadena);
        }
    }
}