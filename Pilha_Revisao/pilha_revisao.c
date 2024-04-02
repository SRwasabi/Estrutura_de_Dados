#include "pilha_revisao.h"

void iniciar(pilha *p){
    p->topo = 0;
}


bool push(pilha *p, t_dado num){
    if(cheio(*p)) return false;

    p->itens[p->topo++] = num;
    return true;
}


bool pop(pilha *p){
    if(vazio(*p)) return false;

    p->topo--;
    return true;
}

int tamanho(pilha p){
    return p.topo;
}

bool vazio(pilha p){
    return(p.topo == 0);
}

bool cheio(pilha p){
    return(p.topo == MAX);
}

///: imprime a lista
void imprimir(pilha p){
    int i;
    printf("\n\tPILHA:\n");
    printf("\t");
    for(i = p.topo-1; i >= 0; i--){
        printf("\n\t%d", p.itens[i]);
    }
    printf("\n");
}
