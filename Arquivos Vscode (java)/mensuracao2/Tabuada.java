package mensuracao2;

import java.util.Scanner;

public class Tabuada {
    public static Scanner ler = new Scanner(System.in);

    public static void main(String[] args) {

        int num;

        System.out.println("Digite um número:");
        num = ler.nextInt();

        for (int i = 1; i < 11; i++) {
            System.out.printf("%d x %d = %d\n", num, i, num * i);
        }
    }
}
