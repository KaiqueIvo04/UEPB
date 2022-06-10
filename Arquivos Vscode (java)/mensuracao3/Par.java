package mensuracao3;

import java.util.Scanner;

public class Par {
    
    public static Scanner ler = new Scanner(System.in);

    public static int ehPar (int n){
        if(n%2 == 0){
            return 1;
        }
        else{
            return 0;
        }
    }

    public static void main(String args[]){
        int numero;

        System.out.println("Digite um número:");
        numero = ler.nextInt();

        if(ehPar(numero) == 1){
            System.out.println("O número é par.");
        } 
        else if (ehPar(numero) == 0){
            System.out.println("O número é ímpar.");
        }

    }
}
