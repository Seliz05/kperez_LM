import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception 
    {
        Scanner scanner = new Scanner(System.in);

        int i = 1; //definicion de variables
        float sumaTemperatura = 0;//acumulador
        float promedio;

        do
        {
            System.out.println("Mes #" +i);//mensaje a imprimir

            System.out.print("Ingrese el nombre del mes: ");//entrada de valores
            String nombreMes = scanner.nextLine();//captura de datos
            
            System.out.print("Ingrese la temperatura del mes " +nombreMes+ " : ");//entrada de valores
            float temperaturaMes = scanner.nextFloat();//captura de datos

            scanner.nextLine();//consumir el carácter de nueva línea pendiente

            i = i + 1;//incremento de la variable i

            //proceso matemático de incremento
            sumaTemperatura += temperaturaMes;
        }

        while(i <= 12);
        {
            promedio = sumaTemperatura / 12;//divicion del valor de sumaTemperatura entre 12

            System.out.println("La temperatura promedio entre los 12 meses es de: " +promedio);//mensaje a imprimir
        }

    }
}
