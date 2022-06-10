package mensuracao2;

import java.util.Scanner;

public class SomaeDiferenca {
    
    public static Scanner ler = new Scanner(System.in);

    public static void main(String[] args) {

        int matrizA[][] = new int[5][5];

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                System.out.println("Digite um número para sua matriz A:");
                matrizA[i][j] = ler.nextInt();
            }
        }

        int matrizB[][] = new int[5][5];

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                System.out.println("Digite um número para sua matriz B:");
                matrizB[i][j] = ler.nextInt();
            }
        }
        
        int matrizSoma[][] = new int[5][5];
        System.out.println("Matriz Soma:");

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
                System.out.printf("%d ", matrizSoma[i][j]);
            }
            System.out.println();
        }

        int matrizDiferenca[][] = new int[5][5];
        System.out.println("Matriz Diferença:");

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                matrizDiferenca[i][j] = matrizA[i][j] - matrizB[i][j];
                System.out.printf("%d ", matrizDiferenca[i][j]);
            }
            System.out.println();
        }

    }

}
