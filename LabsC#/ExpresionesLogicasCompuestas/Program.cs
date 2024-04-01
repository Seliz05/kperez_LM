using System;

namespace ExpresionesLogicasCompuestas
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Ingrese su edad: ");
            int edad = int.Parse(Console.ReadLine());

            Console.Write("Ingrese su altura en cm: ");
            float altura = float.Parse(Console.ReadLine());

            if (edad >= 12 && altura > 150)
            {
                Console.WriteLine("Puede subirse a la montaña rusa.");  //esto pertenece a la línea anterior
            }
            
            else
            {
                Console.WriteLine("No puede subirse a la montaña rusa."); //esto pertenece a la línea anterior
            }
        }
    }
}