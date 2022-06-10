//Questão 3
package AtividadeDirigida1;

public class SomaImpar {
//Método para somar números ímpares
    public int soma (int a, int b){
        int acumulador = 0;
        for (int i = a; i <= b; i++){
            if (i%2 == 1){
                acumulador += i;
            }
        }
        return acumulador;
    }
}
