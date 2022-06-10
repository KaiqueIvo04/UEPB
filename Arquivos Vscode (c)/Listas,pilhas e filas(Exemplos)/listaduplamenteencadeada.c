#include<stdio.h>
#include<stdlib.h>

//Estrutura de um no duplamente encadeado
struct no{
    int dado;
    struct no *anterior;
    struct no *proximo;
};

//Variáveis globais
typedef struct no *ptr_no; //Definição de estrutura do tipo no prt_no
ptr_no lista; //Cria a lista duplamente encadeada
int op;

//Prototipação
void menu_mostrar();
void lista_inserir(ptr_no lista);
void lista_remover(ptr_no lista);
void lista_mostrar(ptr_no lista);

int main(){
    lista = (ptr_no)malloc(sizeof(struct no));
    lista->dado = 0;
    lista->anterior = NULL;
    lista->proximo = NULL;
    do{
        system("cls");
        lista_mostrar(lista);
        menu_mostrar();
        scanf("%d", &op);
        switch(op){
            case 1 : lista_inserir(lista); break;
            case 2 : lista_remover(lista); break;
        }
    } while(op!=0);
    return 0;
}

void menu_mostrar(){
    printf("\nEscolha uma das opcoes:\n");
    printf("1 - Inserir um elemento no final da Lista\n");
    printf("2 - Remover um elemento da Lista\n");
    printf("0 - Sair\n");
}

void lista_inserir(ptr_no lista){
    int valor;
    printf("Informe o valor que deseja inserir: ");
    scanf("%d", &valor);//5

    while(lista->proximo!=NULL){    
        lista = lista->proximo; //i++
    }
    lista->proximo = (ptr_no)malloc(sizeof(struct no));
    lista->proximo->anterior = lista;//o ponteiro anterior do elemento novo apontar para o final da lista
    lista = lista->proximo;// Incrementar e acessar o nome elemento
    lista->dado = valor; // Digitar o valor no dado
    lista->proximo = NULL;
}

void lista_remover(ptr_no lista){
    int valor;
    printf("Informe o valor que deseja remover: ");
    scanf("%d", &valor);//9

    while(lista->dado!=valor){
        lista = lista->proximo;
        //Encontrar elemento
    }
    //Eliminar o elemento
    if(lista->proximo!=NULL){
        lista->anterior->proximo = lista->proximo; // o ponteiro próximo do elemento anterior aponte para o elemento seguinte
        lista->proximo->anterior = lista->anterior; // o ponteiro anterior do elemento próximo aponte para o elemento anterior
    } else{
        //Remover o último elemento
        lista->anterior->proximo = lista->proximo;
    }
}

void lista_mostrar(ptr_no lista){
    while(lista->proximo!=NULL){
        printf("%d ", lista->dado);
        lista = lista->proximo; //i++
    }
    printf("%d ", lista->dado);
}