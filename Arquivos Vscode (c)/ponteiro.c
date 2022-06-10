#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    int x = 25;  /*Tipo inteiro | Espaço de memoria*/
    printf("Valor da variável x = %d\n", x);
    printf("O endereco de memoria da variável x = %p\n", &x);
    int *ptr_x; /*Ponteiro de inteiro | -> Não ocupa espaço na memória (Atalho)*/
    ptr_x = &x; //Aponta para a variavel x
    *ptr_x  = 30; //Manipulação
    printf("Valor da variável x = %d\n", x);
    printf("O endereco de memoria da variável x = %p\n", &x);

    //Informações sobre ponteiro
    printf("Valor da variável ptr_x = %d\n", *ptr_x);//Acessar o valor da variavel ponteiro
    
    float xf = 50.0f;
    printf("Valor da variável xf = %.2f\n", xf);
    printf("O endereco de memoria da variável xf = %p\n", &xf);

    float *ptr_xf;
    ptr_xf = &xf;
    *ptr_xf = 60.0f;
    printf("Valor da variável xf = %.2f\n", xf);
    printf("O endereco de memoria da variável xf = %p\n", &xf);

    printf("Valor da variável ptr_xf = %.2f\n", *ptr_xf);
    printf("O endereco de memória da variável ptr_xf = %p\n", ptr_xf);
    
    int *ptr_x; //Ponteiro de inteiro | -> Não ocupa espaço na memória (Atalho)
    ptr_x = (int *) ptr_xf; //Convertendo o ponteiro de float para inteiro
    
    printf("Valor da variável ptr_x = %.2f\n", *ptr_x);
    printf("O endereco de memória da variável ptr_x = %p\n", ptr_x);   
    
    int xi = 10;
    int *ptr_xi;
    ptr_xi = &xi;
    

    //Antecessor
    printf("\nAntecessor\n");
    printf("O valor da variável ptr_xi = %d\n", *(ptr_xi-1));
    printf("O endereco de memória da variável ptr_xi = %p\n", (ptr_xi-1));

    //Meio
    printf("\nMeio\n");
    printf("O valor da variável ptr_xi = %d\n", *ptr_xi);
    printf("O endereco de memória da variável ptr_xi = %p\n", ptr_xi);

    //Sucessor
    printf("\nSucessor\n");
    printf("O valor da variável ptr_xi = %d\n", *(ptr_xi+1));
    printf("O endereco de memória da variável ptr_xi = %p\n", (ptr_xi+1));

    return 0;
}

/*
    int xi

                        memoria | (int) 
       -1               0061FF14| 4199120
                       memoria  | (int)
    ptr_xi -> (int)    0061FF18 | 10
                        memoria | (int) 
        +1             0061FF1C | 6422296 

*/