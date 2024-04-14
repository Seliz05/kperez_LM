import java.util. Scanner;

public class App {
    public static void main(String[] args) throws Exception 
    {
        Scanner scanner = new Scanner (System.in);

        System.out.print("Ingrese su nombre: ");
        String nombre = scanner.nextLine();

        System.out.print("Ingrese su apellido: ");
        String apellido = scanner.nextLine();

        for(int i = 1; i <= 10; i++)
        {
            System.out.println(i);

            System.out.println("Hola " +nombre  +apellido);
        }
    }
}
