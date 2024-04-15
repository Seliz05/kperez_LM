import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese su nombre: ");//entrada de valores
        String nombre = scanner.nextLine();//definición de variables y captura de datos

        System.out.print("Ingrese su apellido: ");//entrada de valores
        String apellido = scanner.nextLine();//definición de variables y captura de datos

        int i = 1; //definicion de variable  

        //ciclo que permite imprimir el bloque de codigo dentro de las llaves hasta que se cumpla la condicion
        while (i <= 10)
        {
            i = i + 1;//cada vez que se imprime el mensaje el valor de la variable va incrementando hasta que se cumpla la condicion 

            System.out.println("Hola " +nombre+ " " +apellido);//mensaje a imprimir
        }
    }
}
