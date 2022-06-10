package mensuracao1;

import java.util.Scanner;

public class Madeira {
    
    public static Scanner ler = new Scanner(System.in);
    public static void main(String[] args) {

        float A,B,C;
        int condicao = 0;

        System.out.println("Digite o cumprimento do pedaço 1:");
        A = ler.nextFloat();
        System.out.println("Digite o cumprimento do pedaço 2:");
        B = ler.nextFloat();
        System.out.println("Digite o cumprimento do pedaço 3:");
        C = ler.nextFloat();

        if (A < (B + C) && B < (A + C) && C < (A + B)) {
            condicao = 1;
        }
        
        if (condicao == 0) {
            System.out.println("Esses pedaços não formam um triângulo!");
        }
        else if(condicao == 1){
            System.out.println("Esses pedaços formam um triângulo.");
        }
        
    }
}
