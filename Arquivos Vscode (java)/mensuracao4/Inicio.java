package mensuracao4;

import java.util.Scanner;

public class Inicio {
    public static Scanner ler = new Scanner(System.in);
    public static void main(String[] args) {
        Conta corrente = new Conta();
        Conta poupanca = new Conta();

        System.out.println("Bem vindo ao seu sistema bancário!");
        
        int op;
        float valor;
        do{
            System.out.printf("Sua conta corrente tem: R$%.2f\n", corrente.getDinheiro());
            System.out.printf("Sua conta poupança tem: R$%.2f\n", poupanca.getDinheiro());
            System.out.println();
            System.out.println("Digite \n1 - Para sacar dinheiro \n2 - Para depositar dinheiro \n0 - Para sair:");
            System.out.println();            
            op = ler.nextInt();
            if (op == 1) {
                System.out.println("Digite 1 para conta corrente e 2 para conta poupança:");
                int opConta = ler.nextInt();
                if (opConta == 1){
                    System.out.println("Digite o valor para saque:");
                    valor = ler.nextFloat();
                    corrente.Sacar(valor);
                }
                else if(opConta == 2){
                    System.out.println("Digite o valor para saque:");
                    valor = ler.nextFloat();
                    poupanca.Sacar(valor);
                }
            }
            else if (op == 2) {
                System.out.println("Digite 1 para conta corrente e 2 para conta poupança:");
                int opConta = ler.nextInt();
                if (opConta == 1){
                    System.out.println("Digite o valor para depósito:");
                    valor = ler.nextFloat();
                    corrente.Depositar(valor);
                }
                else if(opConta == 2){
                    System.out.println("Digite o valor para depósito:");
                    valor = ler.nextFloat();
                    poupanca.Depositar(valor);
                }
            }
            System.out.printf("Sua conta corrente agora tem: R$%.2f\n", corrente.getDinheiro());
            System.out.printf("Sua conta poupança agora tem: R$%.2f\n", poupanca.getDinheiro());
            System.out.println();
        }while(op != 0);
    }
}
