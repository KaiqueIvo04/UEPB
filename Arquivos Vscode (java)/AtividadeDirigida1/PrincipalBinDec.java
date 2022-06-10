//Questão7
package AtividadeDirigida1;
//Importar biblioteca do Scanner
import java.util.Scanner;

public class PrincipalBinDec{
    //Declaração do Scanner
        public static Scanner ler = new Scanner(System.in);
    //Método principal
    public static void main(String[] args) {


        System.out.println("Infome o numero binario: ");
        int bin = ler.nextInt();

        
        //Criação do objeto do tipo BinDec
        BinDec chamaFuncao = new BinDec();
       

        //Chamada do método Conv da classe BinDec
        System.out.println("Decimal equivalente ao binario informado: " + chamaFuncao.conv(bin));

    }
}