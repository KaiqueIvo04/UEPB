#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tamanho 10

struct ficha {
    int matricula;
    char nome [30];
    int anoEscolar;
};

struct fila {
    int ini;
    int fim;
    struct ficha tfila[tamanho];
};

struct fila filaAluno;
int op;
int i;

void menu();
void fila_mostrar();
void emfileirar();
void desemfileirar();


int main() {

    filaAluno.ini = 0;
    filaAluno.fim = 0;

    do{
        system("cls");
        fila_mostrar();
        menu();
        scanf("%d", &op);

        switch (op) {
            case 1: emfileirar(); break;
            case 2: desemfileirar(); break;
        }

    } while(op != 0);
    
    return 0;
}

void menu() {
    printf("\nEscolha uma opcao digitando um numero:");
    printf("\n1 - Inserir aluno na fila");
    printf("\n2 - Retirar aluno da fila");
    printf("\n0 - Sair\n");
}

void fila_mostrar(){
    printf("Fila:\n");
    for(i = 0; i < tamanho; i++) {
        printf("%d \t %s \t %d \n", filaAluno.tfila[i].matricula, filaAluno.tfila[i].nome, filaAluno.tfila[i].anoEscolar);
    }
}

void emfileirar(){
    if (filaAluno.fim == tamanho) {
        printf("A fila esta cheia, impossivel emfileirar.");
        system("pause");
    }
    else {
        printf("Digite a matricula do aluno: ");
        scanf("%d", &filaAluno.tfila[filaAluno.fim].matricula);
        printf("Digite o nome do aluno: ");
        scanf("%s", &filaAluno.tfila[filaAluno.fim].nome);
        printf("Digite o ano escolar do aluno: ");
        scanf("%d", &filaAluno.tfila[filaAluno.fim].anoEscolar);
        filaAluno.fim++;
    }
}

void desemfileirar(){
    if(filaAluno.ini == filaAluno.fim) {
        printf("A fila esta vazia, impossivel desemfileirar.\n");
        system("pause");
    }
    else {
        for (i = 0; i < tamanho; i++) {
            filaAluno.tfila[i] = filaAluno.tfila[i+1];
            if (i == tamanho -1) {
                filaAluno.tfila[i].matricula = 0;
                strcpy(filaAluno.tfila[i].nome ,"");
                filaAluno.tfila[i].anoEscolar = 0;
                break;
            }
        }
        filaAluno.tfila[filaAluno.fim].matricula = 0;
        strcpy(filaAluno.tfila[filaAluno.fim].nome ,"");
        filaAluno.tfila[filaAluno.fim].anoEscolar = 0;
        filaAluno.fim--;
    }
}