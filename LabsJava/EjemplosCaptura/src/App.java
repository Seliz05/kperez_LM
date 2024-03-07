import java.util.Scanner;

public class App {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Ingrese un número entero: ");
        int entero = scanner.nextInt();

        System.out.println("Ingrese un número flotante: ");
        float flotante = scanner.nextFloat();

        System.out.println("Ingrese un carácter: ");
        char caracter = scanner.next().charAt(0);

        scanner.nextLine();

        System.out.println("Ingrese una cadena de caracteres: ");
        String cadena = scanner.nextLine();

        System.out.println(entero);
        System.out.println(flotante);
        System.out.println(caracter);
        System.out.println(cadena);
    }
}
