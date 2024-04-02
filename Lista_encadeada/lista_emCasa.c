#include "lista_emCasa.h"

void inserir_no_inicio(No **lista, int num){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = num;
        //Acessando valor de novo para atribuir o num
        novo->proximo = *lista;
        *lista = novo;
    }
    else{
        printf("Erro ao alocar memoria\n");
    }
}

void inserir_no_fim(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = num;
        novo->proximo = NULL;
        //Acessando proximo de novo e atribuindo NULL pois é o ultimo

        // é o primeiro? se sim
        if(*lista == NULL) *lista = novo;
        //senao:
        else{
            aux = *lista;
            //percorre os structs até ser falso: (aux->proximo == NULL)
            while(aux->proximo) aux = aux->proximo;
            aux->proximo = novo;
        }
    }
    else{
        printf("Erro ao alocar memoria\n");
    }
}

void inserir_no_meio(No **lista, int num, int ant){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = num;

        //é o primeiro?
        if(*lista == NULL){
            novo->proximo = NULL;
            *lista = novo;
        }
        else{
            aux = *lista;
            while(aux->valor!= ant && aux->proximo) aux = aux->proximo;
            novo->proximo = aux->proximo;
            aux->proximo = novo;
            /*
            lista -> 50 -> 40 -> 30 -> 20 (novo: 35 - ant: 40)
            aux(50) -> proximo(40) -> 30 -> 20
            aux(40) -> proximo(30) -> 20 ACHOU
            novo(35) -> proximo(30) -> 20
            aux(40) -> proximo(novo(35)) -> 30 -> 20
            */
        }
    }
    else{
        printf("Erro ao alocar memoria\n");
    }
}

void imprimir(No *no){
    printf("\n\tLista: ");
    while(no){
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}
