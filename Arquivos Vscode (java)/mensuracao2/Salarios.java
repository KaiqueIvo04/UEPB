package mensuracao2;

import java.util.Scanner;

public class Salarios {

    public static Scanner ler = new Scanner(System.in);

    public static void main(String[] args) {

        float salario = 0, mediaSalario = 0, somaSalario = 0, maiorSalario = 0, mediaFilhos = 0, filhos, somaFilhos = 0;
        int  contador = 0;

        while(salario != -1) {

            System.out.println("Digite o salário:");
            salario = ler.nextFloat();
            if (salario == -1) {
                break;
            }
            somaSalario += salario;
            if (maiorSalario < salario) {
                maiorSalario = salario;
            }

            System.out.println("Digite o número de filhos:");
            filhos = ler.nextInt();
            somaFilhos += filhos;
            contador++;

            mediaSalario = somaSalario/contador;
            mediaFilhos = somaFilhos/contador;
            
        }
        System.out.printf("Media de salários: %.2f\n", mediaSalario);
        System.out.printf("Media de filhos: %.2f\n", mediaFilhos);
        System.out.printf("Maior salário: %.2f\n", maiorSalario);
    }
    
}
