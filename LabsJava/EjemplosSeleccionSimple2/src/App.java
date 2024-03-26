import java.util.Scanner;

public class App {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Ingrese la nota del estudiante (0-20): "); //entrada de valores
        double nota = scanner.nextDouble(); //definicion de variable

        if (nota >= 11) //el mensaje que es imprimido si la condicion se cumple
        {
            System.out.println("El estudiante ha aprobado la prueba.");
        }

        if (nota < 11)
        {
            System.out.println("El estudiante no ha aprobado la prueba.");
        }
    }
}
