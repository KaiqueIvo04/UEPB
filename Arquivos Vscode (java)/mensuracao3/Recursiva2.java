package mensuracao3;

import java.util.Scanner;

public class Recursiva2 {
    public static Scanner ler = new Scanner(System.in);

    public static int maximoDivisor(int n1, int n2){
        if(n2 == 0) return n1;
        return maximoDivisor(n2, n1 % n2);
    } 
    public static void main(String[] args) {
        int num1 , num2;
        System.out.println("Digite o primeiro número:");
        num1 = ler.nextInt();
        System.out.println("Digite o segundo número:");
        num2 = ler.nextInt();

        System.out.printf("O MDC entre %d e %d é: %d", num1, num2, maximoDivisor(num1, num2));
    }
}
