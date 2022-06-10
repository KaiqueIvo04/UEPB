#include <stdio.h>

int troca(int numero1, int numero2) {
    int *ptr_A;
    int *ptr_B;

    ptr_A = &numero2;
    ptr_B = &numero1;
    
    printf("A = %d\n", *ptr_A);
    printf("B = %d\n", *ptr_B);
}

int main(){

    int A,B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    troca(A,B);

    return 0;
}