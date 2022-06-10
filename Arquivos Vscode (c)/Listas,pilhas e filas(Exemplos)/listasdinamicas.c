#include<stdio.h>
#include<stdlib.h>

//Definir a Estrutura No
struct no{
    int dado;
    struct no *proximo;
};

//Variáveis Globais
int op;
typedef struct no *ptr_no;//Definição de estrutura tipo no (nome: *ptr_no)
ptr_no lista; //Criação da Lista Encadeada 

//Prototipação
void menu_mostrar();
void lista_mostrar(ptr_no lista);
void lista_inserir(ptr_no lista);
void lista_remover(ptr_no lista);

int main(){
    //Cria o primeiro no da Lista (Referência)
    lista = (ptr_no)malloc(sizeof(struct no));  //Alocação dinâmica da Lista
    lista->dado=0;
    lista->proximo = NULL;

    do{
        system("cls");
        lista_mostrar(lista);
        menu_mostrar();
        scanf("%d", &op);
        switch (op){
            case 1: lista_inserir(lista); break;
            case 2: lista_remover(lista); break;
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

void lista_mostrar(ptr_no lista){
    while(lista->proximo!=NULL){//Lista.proximo == NULL (BREAK)
        printf("%d ", lista->dado); //Dado
        lista = lista->proximo; //Autoincremento para pecorrer lista
    }
    printf("%d ", lista->dado); 
}

void lista_inserir(ptr_no lista){
    int valor;
    printf("Informe um elemento: ");
    scanf("%d", &valor);//10

    while(lista->proximo!=NULL){
        lista = lista->proximo;//Autoincremento para pecorrer lista até achar o ultimo elemento da lista
    }
    //Uma vez que acha o final da Lista?
    lista->proximo = (ptr_no)malloc(sizeof(struct no));//O final da lista que estava apontando para o NULL vai apontar para o novo endereco (malloc)
    lista = lista->proximo;
    lista->dado = valor;
    lista->proximo = NULL;  
}

void lista_remover(ptr_no lista){
    int valor;
    printf("Informe um elemento que deseja remover: ");
    scanf("%d", &valor);//10

    //Auxiliar
    ptr_no aux;
    aux = (ptr_no)malloc(sizeof(struct no));

    while(lista->dado!=valor){
        if(lista->proximo==NULL){
            break;
        }
        aux = lista;//Criando uma copia do elemento enquanto está passando por ele
        lista = lista->proximo;//Autoincremento para pecorrer lista até achar o ultimo elemento da lista
    }
    if(lista->dado==valor){
        aux->proximo = lista->proximo;
    }
}