//Questão7
package AtividadeDirigida1;

public class BinDec {

    //Método para converter um numero binario para decimal
    public int conv(int bin){
        String binS = Integer.toString(bin);
        int position = binS.length();
        int soma= 0;
        int potencia = 0;

        for( int i = position - 1; i >= 0; --i){
            char bit = binS.charAt(i);
            System.out.println(bit);
            soma+= Math.pow(2,potencia) * Character.getNumericValue(bit) ;
            potencia++;
        }


        return soma;
        
    }
}
