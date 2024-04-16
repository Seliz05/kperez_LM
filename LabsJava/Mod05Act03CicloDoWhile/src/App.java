import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception 
    {
        Scanner scanner = new Scanner(System.in);

        int i = 1; //definicion de variables
        float sumaTemperatura = 0;
        float promedio;

        do
        {
            System.out.println("Mes #" +i);

            System.out.print("Ingrese el nombre del mes: ");
            String nombreMes = scanner.nextLine();
            
            System.out.print("Ingrese la temperatura del mes " +nombreMes+ " : ");
            float temperaturaMes = scanner.nextFloat();

            i = i + 1;

            sumaTemperatura = sumaTemperatura += temperaturaMes;
        }

        while(i <= 12);
        {
            promedio = sumaTemperatura / 12;

            System.out.println("La temperatura promedio entre los 12 meses es de: " +promedio);
        }

    }
}
