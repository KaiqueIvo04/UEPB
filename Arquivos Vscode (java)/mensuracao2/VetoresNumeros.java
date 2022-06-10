package mensuracao2;

import java.util.Scanner;
import java.util.Arrays;

public class VetoresNumeros {
    public static Scanner ler = new Scanner(System.in);

    public static void main(String[] args) {

        int vetor[] = new int[10];

        for(int i = 0; i < 10; i++) {
            System.out.println("Digite um número:");
            vetor[i] = ler.nextInt();
        }

        System.out.print("Vetor crescente: ");

        for(int i = 0; i < 10; i++) {
            Arrays.sort(vetor);
            System.out.printf("%d ", vetor[i]);
        }
        System.out.print("\n");

        System.out.print("Vetor decrescente: ");
        
        inverter(vetor);
        for(int i = 0; i < 10; i++) {
            System.out.printf("%d ", vetor[i]);
        }
    }
    public static void inverter(int[] b){
        int esquerdo = 0;
        int direito = b.length-1;
           
        while (esquerdo < direito) {
            int temp = b[esquerdo]; 
            b[esquerdo]  = b[direito]; 
            b[direito] = temp;
              
            esquerdo++;
            direito--;
        }
    } 
}
