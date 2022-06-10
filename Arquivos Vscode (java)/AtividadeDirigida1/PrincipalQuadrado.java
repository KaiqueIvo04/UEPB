//Questão 2
package AtividadeDirigida1;
//Importar biblioteca Scanner
import java.util.Scanner;

public class PrincipalQuadrado {
//Declarando Scanner
    public static Scanner ler = new Scanner(System.in);
//Método principal
    public static void main(String args[]){
        int num;
//Entrada
        System.out.println("Digite o tamanho do lado do quadrado:");
        num = ler.nextInt();
//Criando objeto do tipo quadrado
        Quadrado chamaFuncao = new Quadrado();
//Saída
        chamaFuncao.fazQuadrado(num);
    }
}
