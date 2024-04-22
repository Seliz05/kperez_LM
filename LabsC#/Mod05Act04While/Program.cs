using System;

namespace Mod05Act04While
{
    internal class Program
    {
        static void Main(string[] args)
        {
            const int numeroEmpleados = 3;//definicion de la variable constante
            float[] pagoHora = new float[numeroEmpleados];//definicion de variable
            float[] horasTrabajadas = new float[numeroEmpleados];
            float[] overTimeTrabajado = new float[numeroEmpleados];
            float[] overTimePagoHora = new float[numeroEmpleados];
            float[] sueldoBruto = new float[numeroEmpleados];
            float[] sueldoNeto = new float[numeroEmpleados];
            float[] descuento = new float[numeroEmpleados];
            float totalSueldoBruto = 0.0f;//acumuladores
            float totalOverTimePago = 0.0f;
            float totalOverTimeHoras = 0.0f;
            
            int i = 1;
            while(i <= numeroEmpleados)//ciclo que permite que se calcule el sueldo bruto y neto de 3 empleados con un descuento de %7
            {
                Console.Write("Ingrese el pago por hora del empleado #" +i+ ": ");//entrada de valores
                pagoHora[i - 1] = float.Parse(Console.ReadLine());//captura de valores para cada empleado utilizando [i]

                Console.Write("Ingrese las horas trabajadas del empleado #" +i+ ": ");//entrada de valores
                horasTrabajadas[i - 1] = float.Parse(Console.ReadLine());//captura de valores para cada empleado utilizando [i]

                if (horasTrabajadas[i - 1] > 40)//si el empleado trabaja tiempo extra se le calcula el pago extra por esas horas que trabajo de más
                {
                    overTimeTrabajado[i - 1] = horasTrabajadas[i - 1] - 40;//saber cuantas horas trabajo extra
                    overTimePagoHora[i - 1] = pagoHora[i] * 2.0f;//dublicar el pago dependiendo de cuantas horas halla trabajado de más
                    sueldoBruto[i - 1] = (40 * pagoHora[i - 1]) + (overTimeTrabajado[i - 1] * overTimePagoHora[i - 1]);//sumar el pago de las horas extras a su sueldo
                }
                else//si no trabaja horas extras
                {
                    sueldoBruto[i - 1] = horasTrabajadas[i - 1] * pagoHora[i - 1];//calcular el sueldo multiplicando el pago por hora y las horas trabajadas
                    overTimeTrabajado[i - 1] = 0.0f;//se mantienen en cero ya que no se trabajo tiempo extra
                    overTimePagoHora[i - 1] = 0.0f;
                }
                descuento[i - 1] = sueldoBruto[i - 1] * 0.07f;//se aplica el descuento del 7% multiplicandolo al suldo bruto de cada empleado  
                sueldoNeto[i - 1] = sueldoBruto[i - 1] - descuento[i];//se calcula el sueldo neto restando el suldo bruto y el descuento calculado anteriormente

                totalSueldoBruto += sueldoBruto[i];//sumando el sueldo bruto de cada empleado para obtener el total
                totalOverTimePago += overTimeTrabajado[i] * overTimePagoHora[i];//multiplicar el tiempo y pago extra de los empleados para obtener el total
                totalOverTimeHoras += overTimeTrabajado[i];//obtener el total de las horas extras trabajadas

                Console.WriteLine("Nómina del empleado #" +i+ ": ");//mensaje a implrimir
                //fixed es para que los valores como sueldoBruto y sueldoNeto se impliman con sus respectivos valores después del punto decimal
                Console.WriteLine("Sueldo bruto del empleado #" +i+ " es de $" +sueldoBruto[i - 1].ToString("F2")+ " y el sueldo neto es de $" +sueldoNeto[i - 1].ToString("F2"));
            

                Console.WriteLine("Total pagado en nómina: $" +totalSueldoBruto.ToString("F2"));//mensajes a imprimir

                Console.WriteLine("Total pagado en horas extra: $" +totalOverTimePago.ToString("F2"));
            
                Console.WriteLine("Total de horas extra trabajadas: " +totalOverTimeHoras.ToString("F2")+ "horas");
                
                i++;//suma de la variable i
            }  
            
        }
    }
}