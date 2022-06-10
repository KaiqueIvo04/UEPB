package mensuracao3;

import java.util.Scanner;

public class Triangulo {

    public static Scanner ler = new Scanner(System.in);

    public static void ehTriangulo(float n1, float n2, float n3) {
        if (n1 < (n2+n3) && n2 < (n1+n3) && n3 < (n1+n2)){
            if (n1 == n2 && n2 == n3) {
                System.out.println("Triângulo Equilátero");
            }
            else if ((n1 == n2 || n1 == n3) || n2 == n3) {
                System.out.println("Triângulo Isósceles");
            }
            else if (!(n1 == n2 && n2 == n3)) {
                System.out.println("Triângulo Escaleno");
            }
        }
    }
    public static void main(String[] args) {
        float X, Y, Z;
        System.out.println("Digite o valor X:");
        X = ler.nextFloat();
        System.out.println("Digite o valor Y:");
        Y = ler.nextFloat();
        System.out.println("Digite o valor Z:");
        Z = ler.nextFloat();

        ehTriangulo(X, Y, Z);
    }
}
