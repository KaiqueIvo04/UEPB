#include <stdio.h>

int main() {

    int movimentos, tipo; 
    char posicao;
    scanf("%d %c", movimentos, posicao);

    while (movimentos--) {
        
        scanf("%d", &tipo);

        if (tipo == 1 && (posicao == 'A' || posicao == 'B'))
            posicao = (posicao == 'A'? 'B' : 'A');
        else if (tipo == 2 && (posicao == 'B' || posicao == 'C'))
            posicao = (posicao == 'B'? 'C' : 'B');
        else if (tipo == 3 && (posicao == 'A' || posicao == 'C'))
            posicao = (posicao == 'C'? 'A' : 'C');
    }
    
    printf("%c\n", posicao);

    return 0;
}