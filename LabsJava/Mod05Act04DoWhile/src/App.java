import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception 
    {
        Scanner scanner = new Scanner(System.in);
        final int numeroEmpleaqdos = 3;//definicion de la variable constante
        float[] pagoHora = new float[numeroEmpleaqdos];//definicion de variable
        float[] horasTrabajadas = new float[numeroEmpleaqdos];
        float[] overTimeTrabajado = new float[numeroEmpleaqdos];
        float[] overTimePagoHora = new float[numeroEmpleaqdos];
        float[] sueldoBruto = new float[numeroEmpleaqdos];
        float[] sueldoNeto = new float[numeroEmpleaqdos];
        float[] descuento = new float[numeroEmpleaqdos];
        float totalSueldoBruto = 0.0f;//acumuladores
        float totalOverTimePago = 0.0f;
        float totalOverTimeHoras = 0.0f;

        int i = 1;
        do//ciclo que permite que se calcule el sueldo bruto y neto de 3 empleados con un descuento de %7
        {
            System.out.print("Ingrese el pago por hora del empleado #" +i+ ": ");//entrada de valores
            pagoHora[i -1] = scanner.nextFloat();//captura de valores para cada empleado utilizando [i - 1]

            System.out.print("Ingrese las horas trabajadas del empleado #" +i+ ": ");//entrada de valores
            horasTrabajadas[i -1] = scanner.nextFloat();//captura de valores para cada empleado utilizando [i - 1]

            if(horasTrabajadas[i -1] > 40)//si el empleado trabaja tiempo extra se le calcula el pago extra por esas horas que trabajo de más
            {
                overTimeTrabajado[i - 1] = horasTrabajadas[i - 1] - 40;//saber cuantas horas trabajo extra
                overTimePagoHora[i -1] = pagoHora[i - 1] * 2.0f;//dublicar el pago dependiendo de cuantas horas halla trabajado de más
                sueldoBruto[i -1] = (40 * pagoHora[i - 1]) + (overTimeTrabajado[i - 1] * overTimePagoHora[i - 1]);//sumar el pago de las horas extras a su sueldo
            }
            else//si no trabaja horas extras
            {
                sueldoBruto[i - 1] =horasTrabajadas[i -1] * pagoHora[i - 1];//calcular el sueldo multiplicando el pago por hora y las horas trabajadas
                overTimeTrabajado[i -1] = 0.0f;//se mantienen en cero ya que no se trabajo tiempo extra
                overTimePagoHora[i - 1]= 0.0f;
            }
            descuento[i -1] = sueldoBruto[i -1] * 0.07f;//se aplica el descuento del 7% multiplicandolo al suldo bruto de cada empleado
            sueldoNeto[i - 1] = sueldoBruto[i - 1] - descuento[i - 1];//se calcula el sueldo neto restando el suldo bruto y el descuento calculado anteriormente

            totalSueldoBruto += sueldoBruto[i - 1];//sumando el sueldo bruto de cada empleado para obtener el total
            totalOverTimePago += overTimeTrabajado[i - 1] * overTimePagoHora[i -1];//multiplicar el tiempo y pago extra de los empleados para obtener el total
            totalOverTimeHoras += overTimeTrabajado[i - 1];//obtener el total de las horas extras trabajadas

            System.out.println("Nómina del empleado #" +i+ "; ");//mensaje a implrimir
            //fixed es para que los valores como sueldoBruto y sueldoNeto se impliman con sus respectivos valores después del punto decimal
            System.out.println("Sueldo bruto del empleado #" +i+ " es de $" +sueldoBruto[i -1]+ " y el sueldo neto es de $" +sueldoNeto[i - 1]);

            i++;//suma de la variable i
        }
        while(i <= numeroEmpleaqdos);//si se cumple lo anterior entonce se cumple este esta parte del ciclo 
        {
            System.out.println("Total pagado en nómina: $" +totalSueldoBruto);//mensajes a imprimir
            System.out.println("Total pagado en horas extra: $" +totalOverTimePago);
            System.out.println("Total de horas extra trabajadas: " +totalOverTimeHoras+ " horas");
        }
    }
}
