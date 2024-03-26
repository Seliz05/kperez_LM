import java.util.Scanner;

public class App {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Introduce un numero: "); //entrada de valores
        int numero = scanner.nextInt(); //definicion de variable

        if (numero > 0) //el mensaje que es imprimido si la condicion se cumple
        {
            System.out.println("El numero es positivo");
        }
    }
}
