package mensuracao1;

import java.util.Scanner;

public class Eleitor {
    
    public static Scanner ler = new Scanner(System.in);

    public static void main(String[] args) {
        
        int idade;

        System.out.println("Digite sua idade: ");
        idade = ler.nextInt();

        if (idade < 16) {
            System.out.println("Não é leitor");
        }
        else if (idade >= 16 && idade <= 18) {
            System.out.println("Eleitor facultativo");
        }
        else if (idade > 65){
            System.out.println("Eleitor facultativo");
        }
        else if (idade > 18 && idade < 65) {
            System.out.println("Eleitor obrigatório");
        }

    }
}
