package mensuracao1;

import java.util.Scanner;

public class Aluno{
    
    public static Scanner ler = new Scanner(System.in);

    public static void main(String[] args) {

        float soma = 0, nota, media;

        System.out.println("Digite o nome do aluno:");
        String aluno = ler.nextLine();
        System.out.println("Digite o nome da disciplina:");
        String disciplina = ler.nextLine();
        
        for(int i = 0; i < 4; i++) {
            System.out.println("Digite uma nota:");
            nota = ler.nextFloat();
            soma += nota;
        }

        media = soma/4;
        System.out.printf("O aluno %s ficou com media %.2f na disciplina de %s.", aluno, media, disciplina);
    }
}