using System;

namespace Mod05Act02CicloFor
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Ingrese su nombre: ");
            string nombre = Console.ReadLine();

            Console.Write("Ingre su apellido: ");
            string apellido = Console.ReadLine();

            for(int i = 1; i <= 10, i++)
            {
                Console.WriteLine("Hola " + nombre " " + apellido);
            }
        }
    }
}