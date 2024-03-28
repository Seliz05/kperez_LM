import java.util.Scanner; //programa para saber si la tarjeta de biblioteca esta activa o inactiva para realizar préstamos.

public class App {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Ingrese el estado de su tarjeta de biblioteca (activa/inactiva): "); //entrada de datos
        String estadoTarjeta = scanner.nextLine(); // deficion de variable

        //condicion que se debe cumplir para imprimer el mensaje adecuado.
        //.equalsIgnoreCase("activa")) es de la manera en que se debe definir para lograr imprimir el mensaje.
        if (estadoTarjeta.equalsIgnoreCase("activa"))  
        {
            System.out.println("Su tarjeta de biblioteca esta activa. Puede realizar préstamos.");
        }

        if (estadoTarjeta.equalsIgnoreCase("inactiva"))
        {
            System.out.println("Su tarjeta de biblioteca esta inactiva. No puede realizar préstamos.");
        }
    }
}