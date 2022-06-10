//Questão 5


public class Soma {
    public static int num2 = 0;
//Método para fazer a soma
    public int Comb(int num1){
        for(int i = 0; i < num1; ++i){
           num2 += num1-i;
        }
        return num2;
    }

}