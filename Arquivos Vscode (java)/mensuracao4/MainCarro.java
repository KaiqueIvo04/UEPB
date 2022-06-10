package mensuracao4;

import java.util.Scanner;

public class MainCarro {

    public static Scanner ler = new Scanner(System.in);
    public static void main(String[] args) {

        Carro objeto = new Carro();

        System.out.println("Digite a marca do carro:");
        String marca = ler.nextLine();
        System.out.println("Digite o modelo do carro:");
        String modelo = ler.nextLine();
        System.out.println("Digite o tipo de combustível do carro:");
        String tipoCombustivel = ler.nextLine();
        System.out.println("Digite o ano do carro:");
        int ano = ler.nextInt();

        System.out.println();

        objeto.setMarca(marca);
        System.out.println("Marca: " + objeto.getMarca());
        objeto.setModelo(modelo);
        System.out.println("Modelo: " + objeto.getModelo());
        objeto.setTipoCombustivel(tipoCombustivel);
        System.out.println("Tipo de Combustível: " + objeto.getTipoCombustivel());
        objeto.setAno(ano);
        System.out.println("Ano: " + objeto.getAno());
    }
}
