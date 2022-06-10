package mensuracao3;

import java.util.Scanner;

public class RegistroFilmes{
    public static Scanner ler = new Scanner(System.in);

    public static void main(String[] args) {
        Filmes filme[] = new Filmes[3];
        for (int i = 0; i < 3; i++) {
            System.out.printf("Filme %d:\n", i);
            System.out.println("Digite o nome do filme:");
            String nome = ler.next();
            System.out.println("Digite o autor do filme:");
            String autor = ler.next();
            System.out.println("Digite o ano do filme:");
            int ano = ler.nextInt();
            System.out.println("Digite o preço do filme:");
            float preco = ler.nextFloat();
            filme[i] = new Filmes(nome, autor, ano, preco);
        }
        System.out.println("Filme 1: "+ filme[0]);
        System.out.println("Filme 2: "+ filme[1]);
        System.out.println("Filme 3: "+ filme[2]);
    }
}