#include <iostream>
using namespace std;

int main()
{ 
    const int numeroEmpleados = 3;
    float pagoHora[numeroEmpleados];
    float horasTrabajadas[numeroEmpleados];
    float overTimeTrabajado[numeroEmpleados];
    float overTimePagoHora[numeroEmpleados];
    float sueldoBruto[numeroEmpleados];
    float sueldoNeto[numeroEmpleados];
    float descuento[numeroEmpleados];
    float totalSueldoBruto = 0.0;
    float totalOverTimePago = 0.0;
    float totalOverTimeHoras = 0.0;

    for(int i = 1; i <= numeroEmpleados; i++)
    {
        cout <<"Ingrese el pago por hora del empleado #" << i << ": ";
        cin >> pagoHora[i];

        cout <<"Ingrese las horas trabajadas del empleado #" << i << ": ";
        cin >> horasTrabajadas[i];
    
        if (horasTrabajadas[i] > 40)
        {
            overTimeTrabajado[i] = horasTrabajadas[i] - 40;
            overTimePagoHora[i] = pagoHora[i] * 2.0;
            sueldoBruto[i] = (40 * pagoHora[i]) + (overTimeTrabajado[i] * overTimePagoHora[i]);
        }
        else
        {
            sueldoBruto[i] = horasTrabajadas[i] * pagoHora[i];
            overTimeTrabajado[i] = 0.0;
            overTimePagoHora[i] = 0.0;
        }
        descuento[i] = sueldoBruto[i] * 0.07;
        sueldoNeto[i] = sueldoBruto[i] - descuento[i];

        totalSueldoBruto += sueldoBruto[i];
        totalOverTimePago += overTimeTrabajado[i] * overTimePagoHora[i];
        totalOverTimeHoras += overTimeTrabajado[i];
        
        cout <<"Nómina del empleado #" << i <<": "<<endl;

        cout <<"Sueldo bruto del empleado #" << i <<" es de $" << fixed << sueldoBruto[i] <<" y el sueldo neto es de $" << fixed << sueldoNeto[i] <<endl;
    }
    cout <<"Total pagado en nómina: $" << fixed << totalSueldoBruto <<endl;

    cout <<"Total pagado en horas extra: $" << fixed << totalOverTimePago <<endl;

    cout <<"Total de horas extra trabajadas: " << fixed << totalOverTimeHoras <<"horas" <<endl;

    return 0;
}