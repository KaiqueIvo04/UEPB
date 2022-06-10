package mensuracao2;

import java.util.Scanner;

public class VetoresNotas {
    public static Scanner ler = new Scanner(System.in);

    public static void main(String[] args) {

        System.out.println("Informe quantas notas teremos: ");
        int coluna = ler.nextInt();

        float vetorNotas[][] = new float[5][coluna], soma, media;

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < coluna; j++) {
                System.out.println("Informe a nota " + j + " do aluno " + i);
                vetorNotas[i][j] = ler.nextFloat();
            }
        }

        for(int i = 0; i < 5; i++){

            soma = 0;

            for(int j = 0; j < coluna; j++){
                soma += vetorNotas[i][j];
            }
            media = soma/coluna;

            if (media >= 7) {
                System.out.printf("Aluno %d: Aprovado",i);
            }
            else if (media < 7) {
                System.out.printf("Aluno %d: Reprovado",i);
            }
            System.out.print("\n");

        }

    }
}
