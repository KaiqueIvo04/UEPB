#include <stdio.h>

int main() {
    int n, totalSaque = 0, totalBloqueio = 0, totalAtaque = 0, saque = 0, bloqueio = 0, ataque = 0;
    int v1, v2, v3;
    char *nome = (char *) malloc(sizeof(char) * 128);
    
    scanf("%i ", &n);
    
    while (n--) {
        gets(nome);
        
        scanf("%i %i %i ", &v1, &v2, &v3);
        totalSaque += v1;
        totalBloqueio += v2;
        totalAtaque += v3;
        
        scanf("%i %i %i ", &v1, &v2, &v3);
        saque += v1;
        bloqueio += v2;
        ataque += v3;
        
    }
    
    printf("Pontos de Saque: %.2lf %%.\n", 100 * saque / (double) totalSaque);
    printf("Pontos de Bloqueio: %.2lf %%.\n", 100 * bloqueio / (double) totalBloqueio);
    printf("Pontos de Ataque: %.2lf %%.\n", 100 * ataque / (double) totalAtaque);

    return 0;
}