package mensuracao1;

import java.util.Scanner;

public class Juros {

    public static Scanner ler = new Scanner(System.in);
    public static void main(String[] args) {

        float deposito, juros, rendimento, valorTotal;

        System.out.println("Digite o valor do depósito:");
        deposito = ler.nextFloat();
        System.out.println("Digite o valor da taxa de juros:");
        juros = ler.nextFloat();

        rendimento = (deposito * juros)/100;
        valorTotal = deposito + rendimento;

        System.out.println("O rendimento é de: R$" + rendimento);
        System.out.println("O valor total foi: R$"+ valorTotal);



    }    
}
