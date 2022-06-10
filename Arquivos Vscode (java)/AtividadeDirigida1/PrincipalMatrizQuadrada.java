//Questão 12

//Importar biblioteca Scanner
import java.util.Scanner;

public class PrincipalMatrizQuadrada {
//Declarando Scanner
    public static Scanner ler = new Scanner(System.in);
//Método principal
    public static void main(String[] args) {
//Entrada
        int n;
        System.out.println("Digite de que ordem sua matriz quadrada será:");
        n = ler.nextInt();
        int matriz[][] = new int [n][n];

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                System.out.printf("Digite o elemento a%d%d da matriz:", i+1, j+1);
                matriz[i][j] = ler.nextInt();
            }
        }
//Criando objeto do tipo Matriz quadrada
        MatrizQuadrada chamaFuncao = new MatrizQuadrada();
//Saída
        System.out.printf("A quantidade de 0s na sua matriz é: %d",chamaFuncao.quantos0(matriz)); 
    }
}
