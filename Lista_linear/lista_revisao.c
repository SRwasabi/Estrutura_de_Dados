#include "lista_revisao.h"

void iniciar(lista *l){
    l->qnt = 0;
}

bool acessar(lista l, int pos){
    if( pos < 0 || pos >= MAX || pos > l.qnt-1) return false;

    int i;
    for(i = 0; i < l.qnt; i++){
        if(i == pos){
            printf("\tpos: %d\n\telemento: %d\n",pos, l.itens[i]);
            return true;
        }
    }
}

bool alterar(lista *l, t_dado num, int pos){
    if( pos < 0 || pos >= MAX || pos > l->qnt-1) return false;

    int i;
    for(i = 0; i < l->qnt; i++){ 
        if(i == pos){
            l->itens[i] = num;
            return true;
        }
    }
}

bool inserir(lista *l, t_dado num, int pos){
    if(l->qnt == MAX || pos < 0 || pos >= MAX) return false;


    if(pos > l->qnt){
        l->itens[l->qnt] = num;
        l->qnt++;
    }
    else{
        int i;
        for(i = l->qnt-1; i >= pos; i--){
            l->itens[i+1] = l->itens[i];
        }
        l->itens[pos] = num;
        l->qnt++;
    }

return true;
}

bool remover(lista *l, int pos){
    if(l->qnt == 0 || pos < 0 || pos >= MAX ||  pos > l->qnt-1) return false;

    int i;
    for(i = pos; i < l->qnt; i++) l->itens[i] = l->itens[i+1];
    l->qnt--;

}

int tamanho(lista l){
    return l.qnt;
}

///: imprime a lista
void imprimir(lista l){
    int i;
    printf("\n\tLISTA:\n");
    printf("\t");
    for(i = 0; i < l.qnt; i++){
        printf(" %d", l.itens[i]);
    }
}
