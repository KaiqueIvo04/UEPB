package CALCULADORASTAKE;

import java.util.Scanner;

public class CalcularStake {

    public static Scanner ler = new Scanner(System.in);

    public static void main(String[] args) {
        float banca, UmPorcento, DoisPorcento, TresPorcento, QuatroPorcento, NovePorcento;
        System.out.println("Digite quanto sua BANCA tem:");
        banca = ler.nextFloat();

        UmPorcento = banca/100;
        DoisPorcento = (banca * 2)/100;
        TresPorcento = (banca * 3)/100;
        QuatroPorcento = (banca * 4)/100;
        NovePorcento = (banca * 9)/100;

        System.out.printf("\nPRIMEIRA OPÇÃO: \n1@: %.2f \n2@: %.2f \n4@: %.2f\n\n", UmPorcento, DoisPorcento, QuatroPorcento);
        System.out.printf("SEGUNDA OPÇÃO: \n1@: %.2f \n3@: %.2f \n9@: %.2f\n", UmPorcento, TresPorcento, NovePorcento);
    }
}
