package mensuracao3;

import java.util.Scanner;

public class Recursiva1 {

    public static Scanner ler = new Scanner(System.in);

    public static int somatoria(int n){
        int resultado;
        if (n == 0)
            return 0;
        else 
            resultado = n + somatoria(n-1);
            return resultado;
    }
    public static void main(String args[]){
        int num;
        System.out.println("Digite um número para a somatória:");
        num = ler.nextInt();
        System.out.print(somatoria(num));
    }
}
