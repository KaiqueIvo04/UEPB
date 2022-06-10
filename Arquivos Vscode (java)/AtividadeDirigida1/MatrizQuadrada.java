//Questão 12

public class MatrizQuadrada {
//Método para contar os 0s da matriz
    public int quantos0(int matriz[][]){
        int acumulador = 0;
        for (int i = 0; i < matriz.length; i++){
            for (int j = 0; j < matriz.length; j++){
                if (matriz[i][j] == 0){
                    acumulador ++;
                }
            }
        }
        return acumulador;
    }
}
