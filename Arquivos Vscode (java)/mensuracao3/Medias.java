package mensuracao3;

import java.util.Scanner;

public class Medias {

    public static Scanner ler = new Scanner(System.in);

    public static float qualMedia (float n1, float n2, float n3){
        float soma, media, resultado = 0;
        String letra;
        System.out.println("Digite a letra:");
        letra = ler.next();

        if(letra.equals("A")){
            soma = n1+n2+n3;
            media = soma/3;
            resultado = media;
        }
        else if (letra.equals("B")){
            soma = (n1*5)+(n2*3)+(n3*2);
            media = soma/10;
            resultado = media;
        }
        return resultado;
    }
    public static void main(String args[]){
        float nota1, nota2, nota3;

        System.out.println("Digite a nota 1:");
        nota1 = ler.nextFloat();
        System.out.println("Digite a nota 1:");
        nota2 = ler.nextFloat();
        System.out.println("Digite a nota 1:");
        nota3 = ler.nextFloat();

        System.out.printf("A media é: %.2f", qualMedia(nota1, nota2, nota3)); 
    }
}
