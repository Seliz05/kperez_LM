#include <iostream>
using namespace std;

int main()
{ 
    const int numeroEmpleados = 3;//definición de la variable constantes
    float pagoHora[numeroEmpleados];//definición de variables
    float horasTrabajadas[numeroEmpleados];
    float overTimeTrabajado[numeroEmpleados];
    float overTimePagoHora[numeroEmpleados];
    float sueldoBruto[numeroEmpleados];
    float sueldoNeto[numeroEmpleados];
    float descuento[numeroEmpleados];
    float totalSueldoBruto = 0.0;//acumuladores
    float totalOverTimePago = 0.0;
    float totalOverTimeHoras = 0.0;

    for(int i = 1; i <= numeroEmpleados; i++)//ciclo que permite que se calcule el sueldo bruto y neto de 3 empleados con un descuento de %7
    {
        cout <<"Ingrese el pago por hora del empleado #" << i << ": ";//entrada de valores
        cin >> pagoHora[i];//captura de valores para cada empleado utilizando [i]

        cout <<"Ingrese las horas trabajadas del empleado #" << i << ": ";//entrada de valores
        cin >> horasTrabajadas[i];//captura de valores para cada empleado utilizando [i]
    
        if (horasTrabajadas[i] > 40)//si el empleado trabaja tiempo extra se le calcula el pago extra por esas horas que trabajo de más
        {
            overTimeTrabajado[i] = horasTrabajadas[i] - 40;//saber cuantas horas trabajo extra
            overTimePagoHora[i] = pagoHora[i] * 2.0;//dublicar el pago dependiendo de cuantas horas halla trabajado de más
            sueldoBruto[i] = (40 * pagoHora[i]) + (overTimeTrabajado[i] * overTimePagoHora[i]);//sumar el pago de las horas extras a su sueldo
        }
        else//si no trabaja horas extras
        {
            sueldoBruto[i] = horasTrabajadas[i] * pagoHora[i];//calcular el sueldo multiplicando el pago por hora y las horas trabajadas
            overTimeTrabajado[i] = 0.0;//se mantienen en cero ya que no se trabajo tiempo extra
            overTimePagoHora[i] = 0.0;
        }
        descuento[i] = sueldoBruto[i] * 0.07;//se aplica el descuento del 7% multiplicandolo al suldo bruto de cada empleado  
        sueldoNeto[i] = sueldoBruto[i] - descuento[i];//se calcula el sueldo neto restando el suldo bruto y el descuento calculado anteriormente

        totalSueldoBruto += sueldoBruto[i];//sumando el sueldo bruto de cada empleado para obtener el total
        totalOverTimePago += overTimeTrabajado[i] * overTimePagoHora[i];//multiplicar el tiempo y pago extra de los empleados para obtener el total
        totalOverTimeHoras += overTimeTrabajado[i];//obtener el total de las horas extras trabajadas
        
        cout <<"Nómina del empleado #" << i <<": "<<endl;//mensaje a implrimir
        //fixed es para que los valores como sueldoBruto y sueldoNeto se impliman con sus respectivos valores después del punto decimal
        cout <<"Sueldo bruto del empleado #" << i <<" es de $" << fixed << sueldoBruto[i] <<" y el sueldo neto es de $" << fixed << sueldoNeto[i] <<endl;
    }
    cout <<"Total pagado en nómina: $" << fixed << totalSueldoBruto <<endl;//mensajes a imprimir

    cout <<"Total pagado en horas extra: $" << fixed << totalOverTimePago <<endl;

    cout <<"Total de horas extra trabajadas: " << fixed << totalOverTimeHoras <<"horas" <<endl;

    return 0;
}