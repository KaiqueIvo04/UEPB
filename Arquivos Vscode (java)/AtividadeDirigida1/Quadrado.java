//Questão 2

public class Quadrado {
//Método para desenhar o quadrado
    public void fazQuadrado(int n){
        for (int i = 0; i < n; i++){
            System.out.print("* ");
        }
        System.out.println();
        for (int i = 0; i < (n-2); i++){
            for (int j = 0; j < n; j++){
                if (j == 0 || j == (n-1)){
                    System.out.print("* ");
                }
                else{
                    System.out.print("  ");
                }
                
            }
            System.out.println();
        }
        for (int i = 0; i < n; i++){
            System.out.print("* ");
        }
    }
}
