
public class OitoRainhas{
    private static java.security.SecureRandom sorteio = new java.security.SecureRandom();
    public static final int TAMANHO = 8;
    private static char[][] tabuleiro;
    private static int rainhas;

    public static boolean movimentoValido(int linha, int coluna){
        return linha >= 0 && linha < TAMANHO && coluna >= 0 && coluna < TAMANHO;
    }
    public static boolean casaDisponivel(){
        for(int linha = 0; linha < tabuleiro.length; linha++){
            for(int coluna = 0; coluna < tabuleiro[linha].length; coluna++){
                if(tabuleiro[linha][coluna] == '\0') // (char) 0
                    return true; 
            }
        }
        return false;
    }

    public static boolean verificarRainha(int valorLinha, int valorColuna){
        int linha = valorLinha, coluna = valorColuna;
        for(int posicao = 0; posicao < TAMANHO; posicao++){
            if(tabuleiro[linha][posicao] == 'R' || 
                    tabuleiro[posicao][coluna] == 'R'){
                return false;
            }
        } // Fim do for
        // diagonal superior esquerda
        for(int casa = 0; casa < TAMANHO && movimentoValido(--linha, --coluna); casa++){
            if(tabuleiro[linha][coluna] == 'R')
                return false;
        }
        linha = valorLinha;
        coluna = valorColuna;

        // diagonal superior direita
        for(int diagonal = 0; diagonal < TAMANHO && movimentoValido(--linha, ++coluna); diagonal++){
            if(tabuleiro[linha][coluna] == 'R')
                return false;
        }
        linha = valorLinha;
        coluna = valorColuna;

        // diagonal inferior esquerda
        for(int diagonal = 0; diagonal < TAMANHO && movimentoValido(++linha, --coluna); diagonal++){
            if(tabuleiro[linha][coluna] == 'R')
                return false;
        }
        linha = valorLinha;
        coluna = valorColuna;

        // diagonal inferior direita
        for(int diagonal = 0; diagonal < TAMANHO && movimentoValido(++linha, ++coluna); diagonal++){
            if(tabuleiro[linha][coluna] == 'R')
                return false;
        }
        return true;
    } // Fim do m??todo verificarRainha

    public static void marcacoes(int linha, int coluna){
        for(int i = 0; i < TAMANHO; i++){
            if(tabuleiro[linha][i] == '\0') 
                tabuleiro[linha][i] = '.';
            if(tabuleiro[i][coluna] == '\0') 
                tabuleiro[i][coluna] = '.';
        }
        marcarDiagonais(linha, coluna);
    } // Fim do m??todo marcacoes

     // Marca????es nas 4 dire????es diagonais (superiores e inferiores, esquerdas e direitas)
     public static void marcarDiagonais(int valorLinha, int valorColuna){
        int linha = valorLinha, coluna = valorColuna;
            
        // diagonal superior esquerda
        for(int diagonal = 0; diagonal < TAMANHO && movimentoValido(--linha, --coluna); diagonal++){
            tabuleiro[linha][coluna] = '.';
        }

        // Retoma valores passados na chamada do m??todo
        linha = valorLinha;
        coluna = valorColuna;

        // diagonal superior direita
        for(int diagonal = 0; diagonal < TAMANHO && movimentoValido(--linha, ++coluna); diagonal++){
            tabuleiro[linha][coluna] = '.';
        }

        // Retoma valores passados na chamada do m??todo
        linha = valorLinha;
        coluna = valorColuna;

        // diagonal inferior direita
        for(int diagonal = 0; diagonal < TAMANHO && movimentoValido(++linha, ++coluna); diagonal++){
            tabuleiro[linha][coluna] = '.';
        }

        // Retoma valores passados na chamada do m??todo
        linha = valorLinha;
        coluna = valorColuna;

        // diagonal inferior esquerda
        for(int diagonal = 0; diagonal < TAMANHO && movimentoValido(++linha, --coluna); diagonal++){
               tabuleiro[linha][coluna] = '.';
        }
    } // Fim do m??todo marcacoesDiagonais

    // Imprime o tabuleiro
    public static void imprimeTabuleiro(){
        
        for(int i = 0; i < TAMANHO; i++)    
            System.out.printf("\t%d", i);

        System.out.printf("\n\n");

        for(int linha = 0; linha < tabuleiro.length; linha++){
            
            System.out.printf("%d", linha);  // Falha 4: corrigi aqui o printf

            for(int coluna = 0; coluna < tabuleiro[linha].length; coluna++){
                System.out.printf("\t%c", tabuleiro[linha][coluna]);
            } // For interno

            System.out.printf("\n\n");
        } // For externo

        System.out.printf("\nForam %d rainhas posicionadas no tabuleiro.\n\n", rainhas);
  
    } // Fim do m??todo imprimeTabuleiro

    public static void main(String args[]){

        while(rainhas < TAMANHO){

            int moveLinha;
            int moveColuna;
            
            // campo para indicar que todas as casas foram preenchidas
            boolean concluido = false;

            tabuleiro = new char[TAMANHO][TAMANHO];
            rainhas = 0;
            
            // La??o para colocar rainhas enquanto houver casas
            // Ou se ainda faltar alguma rainha
            while(!concluido){
                
                // sorteie duas posi????es (movimentos)
                moveLinha = sorteio.nextInt(TAMANHO);
                moveColuna = sorteio.nextInt(TAMANHO);

                // Se movimento v??lido, coloque a rainha
                // e retire marca????es de colis??o
                if(verificarRainha(moveLinha, moveColuna)){
                    tabuleiro[moveLinha][moveColuna] = 'R';
                    marcacoes(moveLinha, moveColuna);
                    ++rainhas;
                }

                // Sem casas dispon??veis, conclu??do o processo.
                if(!casaDisponivel()){
                    concluido = true;
                }
            } // Fim do while interno
        } // Fim do while externo

        imprimeTabuleiro();

    } // Fim do m??todo main

} // Fim da classe


// Adaptado de: Deitel & Deitel. Java como programar. 10 ed.