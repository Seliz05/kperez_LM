import java.util.Scanner;

public class App {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Ingrese el estado de su tarjeta de biblioteca (activa/inactiva): ");
        String estadoTarjeta = scanner.nextLine();

        if (estadoTarjeta == "activa")
        {
            System.out.println("Su tarjeta de biblioteca esta activa. Puede realizar préstamos.");
        }

        if (estadoTarjeta == "inactiva")
        {
            System.out.println("Su tarjeta de biblioteca esta inactiva. No puede realizar préstamos.");
        }
    }
}
