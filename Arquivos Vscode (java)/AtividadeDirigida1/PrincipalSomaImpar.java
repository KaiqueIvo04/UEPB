//Questão 3
package AtividadeDirigida1;
//Importar biblioteca Scanner
import java.util.Scanner;

public class PrincipalSomaImpar{
//Declarando Scanner
    public static Scanner ler = new Scanner(System.in);
//Método principal
    public static void main(String args[]){
//Entrada
        int a, b;
        System.out.println("Digite o valor de início:");
        a = ler.nextInt();
        System.out.println("Digite o valor de fim:");
        b = ler.nextInt();
//Criando objeto do tipo SomaImpar
        SomaImpar chamaFuncao = new SomaImpar();
//Saída
        System.out.printf("A soma de todos os números ímpares é: %d", chamaFuncao.soma(a, b)); 
    }

}