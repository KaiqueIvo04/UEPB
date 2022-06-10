#include <stdio.h>
#include <locale.h>
int main(void) {

    setlocale(LC_ALL, "Portuguese");

    float quilometroPorLitro;
    float numeroQuilometros;
    float numeroLitros;
    float litrosTotal;
    float quilometrosTotal;
    float totalCombinado;

    printf("Digite o número de quilômetros dirigidos após o abastecimento: (Digite -1 para parar)\n");
    scanf("%f", &numeroQuilometros);
    printf("Digite o número de litros abastecidos:\n");
    scanf("%f", &numeroLitros);
    
    quilometroPorLitro = (numeroQuilometros / numeroLitros);
    printf("Você rodou %.2f quilômetros por litro usado.", quilometroPorLitro);

    while (numeroQuilometros != -1) {

        printf("\nDigite o número de quilômetros dirigidos após o abastecimento: (Digite -1 para parar)\n");
        scanf("%f", &numeroQuilometros);
        if (numeroQuilometros == -1) {
            break;
        }
        printf("Digite o número de litros abastecidos:\n");
        scanf("%f", &numeroLitros);

        quilometroPorLitro = (numeroQuilometros / numeroLitros);
        printf("Você rodou %.2f quilômetros por litro usado.", quilometroPorLitro);

        quilometrosTotal += numeroQuilometros;
        litrosTotal += numeroLitros;

    }
    
    totalCombinado = (quilometrosTotal / litrosTotal);
    printf("O total combinado de quilômetros por litro para todos os abastecimentos foi: %.2f", totalCombinado);

    return 0;
}