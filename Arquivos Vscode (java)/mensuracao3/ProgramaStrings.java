package mensuracao3;

import java.util.Scanner;

public class ProgramaStrings {

    public static void mostrarMenu(){
        System.out.println("Menu:");
        System.out.println("1 - Ler uma string (S1)");
        System.out.println("2 - Imprimir tamanho da string S1");
        System.out.println("3 - Comparar string S1 com uma nova string S2");
        System.out.println("4 - Concatenar string S1 com uma nova string S2");
        System.out.println("5 - Imprimir a string S1 inversa");
        System.out.println("6 - Sair");
    }
    public static int tamanho(String str){
        int tam;
        tam = str.length();
        return tam;
    }
    public static void compara(String str, String str2){
        if(str.equals(str2)) {
            System.out.println("As strings são iguais.");
        }
        else {
            System.out.println("As strings são diferentes.");
        }
    }
    public static String concatena(String str, String str2){
        String result;
        result = str + str2;
        return result;
    }
    public static void inversa(String str){
        StringBuilder strb = new StringBuilder(str);
		str = strb.reverse().toString();
		System.out.println(str);
    }

    public static Scanner ler = new Scanner(System.in);

    public static void main(String args[]){
        int op;
        String s1 = "", s2;
        do{
            mostrarMenu();
            op = ler.nextInt();
            switch(op) {
                case 1: 
                    System.out.println("Digite sua string:");
                    s1 = ler.next();
                    break;
                case 2: 
                    System.out.printf("O tamanho da string é: %d\n", tamanho(s1)); 
                    break;
                case 3: 
                    System.out.println("Digite a string S2:");
                    s2 = ler.next();
                    compara(s1,s2); 
                    break;
                case 4: 
                    System.out.println("Digite a string S2:");
                    s2 = ler.next();
                    System.out.printf("Resultado: %s\n",concatena(s1,s2));
                    break;
                case 5: 
                    System.out.print("String inversa: "); 
                    inversa(s1);
                    break;
                case 6: 
                    op = 0;
                    break;
            }
        }while(op != 0);
    }
}
