package mensuracao3;

import java.util.Scanner;

public class Strings {
    public static Scanner ler = new Scanner(System.in);

    public static void main(String args[]){
        String str1, str2;
        System.out.println("Digite a String 1:");
        str1 = ler.nextLine();
        System.out.println("Digite a String 2:");
        str2 = ler.nextLine();

        if(str1.equals(str2)) {
            System.out.println("Strings iguais.");
        }
        else {
            System.out.println(str1+str2);
        }
    }
}
