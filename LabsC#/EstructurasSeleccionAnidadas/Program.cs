using System;

namespace EstructurasSeleccionAnidadas
{
    internal class Program
    {
        static void Main(string[] args)
        {
            char libroPrestado ='N'; //'Y' para sí, 'N' para no
            int numLibrosSolicitante = 2;
            char esEmpleadoSolicitante = 'Y';
            
            if (libroPrestado == 'N')
            {
                if(numLibrosSolicitante < 3 || esEmpleadoSolicitante =='Y')
                {
                    Console.WriteLine("Prestar libro");
                }

                else
                {
                    Console.WriteLine("No prestar libro");
                }
            }

            else
            {
                Console.WriteLine("No prestar");
            }
                
        }   
    }
}