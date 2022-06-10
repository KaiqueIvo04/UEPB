//Questão11
package AtividadeDirigida1;

//Importar biblioteca do Scanner
import java.util.Scanner;

public class PrincipalContVogal{
    
    //Declaração do Scanner
    public static Scanner ler = new Scanner(System.in);
    //Método Principal
    public static void main(String[] args) {
        System.out.println("Informe um nome: ");
        String nome = ler.nextLine();

    //Criação do objeto do tipo ContVogal
        ContVogal result = new ContVogal();

    
    //Chamada do método ContV da classe ContVogal
        System.out.println("O nome informado tem: " + result.ContV(nome)+" vogais");
    }


}