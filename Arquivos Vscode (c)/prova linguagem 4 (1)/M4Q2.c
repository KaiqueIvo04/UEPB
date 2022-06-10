#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct fila{
    char matricula[10];
    char nome[50];
    char anoE[10];
};

struct no{
    struct fila lista;
    struct no *anterior;
    struct no *proximo;
};

typedef struct no *ptr_no;
ptr_no merenda;
int i=0, op,  it = 0, tamanho = 0;

void menu();
void enfileirar(ptr_no merenda);
void desenfileirar(ptr_no merenda);
void fila_mostrar(ptr_no merenda);

int main(){
    merenda = (ptr_no) malloc(sizeof(struct no));
    strcpy(merenda->lista.matricula, " ");
    strcpy(merenda->lista.nome, " ");
    strcpy(merenda->lista.anoE ," ");
    
    merenda->proximo = NULL;
    printf("Informe a quantidade de alunos presentes: ");
    scanf("%d", &tamanho);
    do{ 
        fila_mostrar(merenda);
        menu();
        scanf("%d", &op);
        switch(op){
            case 1 : enfileirar(merenda); break;
            case 2 : desenfileirar(merenda); break;
        }
        it = op;
    }while(op!=0);
    return 0;
}
void menu(){
    printf("\nEscolha uma opcao digitando um numero:");
    printf("\n1 - Inserir aluno na fila");
    printf("\n2 - Retirar aluno");
    printf("\n0 - Sair\n");
}
void fila_mostrar(ptr_no merenda){ 
    int i = 0, j, igual, ficha[tamanho];
    do{
        ficha[i] = rand() % tamanho;
        igual = 0;
        for(j = 0; j < i; j++){ 
            if(ficha[j] == ficha[i])
                igual = 1;
        }
        if(igual == 0)
            i++;
    }while(i < tamanho);
    i = i - tamanho;
    while(merenda->proximo!=NULL){
        printf("\n");
        printf("Matricula:%s\n", merenda->lista.matricula);
        printf("Nome:%s\n", merenda->lista.nome);
        printf("Ano Escolar:%s\n", merenda->lista.anoE);
        printf("Ficha:%d\n", i);
        printf("\n");
        merenda = merenda->proximo;
        i++;
    }
    
    printf("\n");
    printf("Matricula:%s\n", merenda->lista.matricula);
    printf("Nome:%s\n", merenda->lista.nome);
    printf("Ano Escolar:%s\n", merenda->lista.anoE);
    printf("Ficha:%d\n", i);
    printf("\n");
    i++;
}

void enfileirar(ptr_no merenda){
    if(i == tamanho){
        printf("A fila esta cheia, impossivel inserir aluno.\n");
        system("pause");
    } else{
        while(merenda->proximo!=NULL){
            merenda = merenda->proximo;
        }
        merenda->proximo = (ptr_no) malloc(sizeof(struct no));
        merenda->proximo->anterior = merenda;
        merenda = merenda->proximo;
        fflush(stdin);
        printf("Digite o numero da matricula: ");
        gets(merenda->lista.matricula);
        printf("Digite o nome do aluno: ");
        gets(merenda->lista.nome);
        printf("Digite o ano escolar: ");
        gets(merenda->lista.anoE);
        printf("\n");
        merenda->proximo = NULL;
        i++;
    }
}

void desenfileirar(ptr_no merenda){
    
    if(i == 0){
        printf("\nA fila esta vazia, impossivel de desenfileirar\n");
        system("pause");
    } else{
        ptr_no aux;
        aux = (ptr_no)malloc(sizeof(struct no));
        aux = merenda; //7
        if(merenda->proximo!=NULL){
            merenda = merenda->proximo;
            aux->proximo = merenda->proximo;
        }
        i--;
    }
}