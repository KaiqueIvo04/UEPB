//Questão 5
package AtividadeDirigida1;
//Importar biblioteca do Scanner
import java.util.Scanner;

class PrincipalSoma {
//Declaração do Scanner
    public static Scanner ler = new Scanner(System.in);
//Método principal
    public static void main(String[] args){
        System.out.println("Informe um numero inteiro positivo: ");
        int num1 = ler.nextInt();
        if(num1 < 0){
            System.out.println("ERRO, NUMERO INVALIDO");
        }
//Criação do objeto do tipo Soma
        Soma result = new Soma();
//Chamada do método Comb da classe Soma
        System.out.println("O resultado: " + result.Comb(num1));
    }
}