public class App {
    public static void main(String[] args) throws Exception {
        char libroPrestado ='N'; //'Y' para sí, 'N' para no
        int numLibrosSolicitante = 2;
        char esEmpleadoSolicitante = 'Y';

        if (libroPrestado == 'N') 
        {
            if(numLibrosSolicitante < 3 || esEmpleadoSolicitante == 'Y')
            {
                System.out.println("Prestar libro");
            }

            else
            {
                System.out.println("No prestar libro");
            }

        }

        else
        {
            System.out.println("No prestar libro");
        }
    }
}
