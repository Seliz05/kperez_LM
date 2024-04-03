import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese su edad: ");
        int edad = scanner.nextInt();

        System.out.print("Ingrese su altura en cm: ");
        float altura = scanner.nextFloat();

        if(edad >= 12 && altura > 150)
        {
            System.out.println("Puede subirse a la montaña rusa.");
        }

        else
        {
            System.out.println("No puede subirse a la montaña rusa."); //esto pertenece a la línea anterior
        }
    }
}
