package mensuracao1;

import java.util.Scanner;

public class Calorias {
    
    public static Scanner ler = new Scanner(System.in);

    public static void main(String[] args) {

        String pratoTipico, bebida;
        int caloriasTotal = 0;

        System.out.println("Digite o prato típico:");
        pratoTipico = ler.nextLine();
        System.out.println("Digite a bebida:");
        bebida = ler.nextLine();

        switch(pratoTipico) {
            case "Italiano":
            if (bebida == "Chá") {
                caloriasTotal = 780;
            }
            else if (bebida == "Suco de laranja") {
                caloriasTotal = 830;
            }
            else if (bebida == "Refrigerante") {
                caloriasTotal = 840;
            }
            break;
            case "Japones":
                if (bebida == "Chá") {
                    caloriasTotal = 372;
                }
                else if (bebida == "Suco de laranja") {
                    caloriasTotal = 422;
                }
                else if (bebida == "Refrigerante") {
                    caloriasTotal = 432;
                }
                break;
            case "Salvadoreno":
                if (bebida == "Chá") {
                    caloriasTotal = 575;
                }
                else if (bebida == "Suco de laranja") {
                    caloriasTotal = 625;
                }
                else if (bebida == "Refrigerante") {
                    caloriasTotal = 635;
                }
                break;
        }
        System.out.printf("A quantidade total de calorias é: %d cal", caloriasTotal);
    }
}
