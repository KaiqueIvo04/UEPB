package mensuracao2;

import java.util.Scanner;

public class MatrizTransposta {
    
    public static Scanner ler = new Scanner(System.in);

    public static void main(String[] args) {

        int linha, coluna;

        System.out.println("Digite quantas linhas sua matriz terá:");
        linha = ler.nextInt();
        System.out.println("Digite quantas colunas sua matriz terá:");
        coluna = ler.nextInt();

        int matriz[][] = new int[linha][coluna];

        for (int i = 0; i < linha; i++){
            for (int j = 0; j < coluna; j++) {
                System.out.println("Digite um número para a matriz:");
                matriz[i][j] = ler.nextInt();
            }
        }

        int transposta[][] = new int[coluna][linha];

        for (int i = 0; i < linha; i++){
            for (int j = 0; j < coluna; j++) {
                transposta[j][i] = matriz[i][j];
            }
        }

        System.out.println("Sua matriz:");

        for (int i = 0; i < linha; i++){
            for (int j = 0; j < coluna; j++) {
                System.out.printf("%d ", matriz[i][j]);
            }
            System.out.println();
        }

        System.out.println("Transposta:");

        for (int i = 0; i < coluna; i++){
            for (int j = 0; j < linha; j++) {
                System.out.printf("%d ", transposta[i][j]);
            }
            System.out.println();
        }
    }

}
