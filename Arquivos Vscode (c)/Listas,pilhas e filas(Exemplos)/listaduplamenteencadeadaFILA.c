#include<stdio.h>
#include<stdlib.h>
#define tamanho 3

//Estrutura de um no fila
struct no{
    int dado;
    struct no *anterior;
    struct no *proximo;
};

//Variaveis globais
typedef struct no *ptr_no;
ptr_no fila;
int contador;
int op;

//Prototipação
void menu_mostrar();
void fila_inserir(ptr_no fila);
void fila_remover(ptr_no fila);
void fila_mostrar(ptr_no fila);

int main(){
    contador = 0;
    fila = (ptr_no)malloc(sizeof(struct no));
    fila->dado = 0;
    fila->anterior = NULL;
    fila->proximo = NULL;
    do{
        fila_mostrar(fila);
        menu_mostrar();
        scanf("%d", &op);
        switch(op){
            case 1: fila_inserir(fila); break;
            case 2: fila_remover(fila); break;
        }
    }while(op!=0); 
    return 0;
}

void menu_mostrar(){
    printf("\nEscolha uma das opcoes:\n");
    printf("1 - Inserir um elemento no final da Fila\n");
    printf("2 - Remover um elemento no inicio da Fila\n");
    printf("0 - Sair\n");
}

void fila_inserir(ptr_no fila){
    if(contador==tamanho){
        printf("\nA fila esta cheia, volte outro dia\n");
        system("pause");
    } else{
        while (fila->proximo!=NULL){// 7 | 8  | 9 | 8 |->
            fila = fila->proximo; //i++;
        }
        fila->proximo = (ptr_no)malloc(sizeof(struct no));//ASD00004
        fila->proximo->anterior = fila;
        fila = fila->proximo;
        printf("Informe um elemento que deseja inserir: ");
        scanf("%d", &fila->dado);
        fila->proximo = NULL;
        contador++;
    }
}

void fila_remover(ptr_no fila){
    if(contador == 0){
        printf("\nA fila esta vazia, logo chegara gente\n");
        system("pause");
    } else{ 
        fila = fila->proximo;
        if(fila->proximo==NULL){
            fila->anterior->proximo = fila->proximo;
        }else{
            fila->anterior->proximo = fila->proximo;
            fila->proximo->anterior = fila->anterior;
        }
        contador--;
    }
}

void fila_mostrar(ptr_no fila){
    system("cls");
    while(fila->proximo!=NULL){ // 
        printf("%d ", fila->dado);//7 8 9
        fila = fila->proximo; //i++;
    }
    printf("%d ", fila->dado);
}