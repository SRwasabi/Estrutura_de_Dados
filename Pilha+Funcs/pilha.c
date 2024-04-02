#include "pilha.h"

///: inicializa a pilha p no estado vazio
void stack_init(pilha *p){
    p->topo = 0;
}

///: insere o elemento x no topo da pilha p
bool push(pilha *p, t_dado x){
    if(p->topo == MAX) return false;

    p->itens[p->topo++] = x;
    return true;
}

///: remove e devolve o elemento do topo da pilha p
bool pop(pilha *p, t_dado *r){
    if(p->topo == 0) return false;

    *r = p->itens[--p->topo];
    return true;
}

///: acessa o elemento do topo da pilha p devolvendo uma cópia do seu valor
t_dado top(pilha p){
    return p.itens[p.topo-1];
}

///: devolve verdadeiro se a pilha p estiver vazia e falso, caso contrário
bool stack_isempty(pilha p){
    return p.topo == 0;
}

///: devolve verdadeiro se a pilha p estiver cheia e falso, caso contrário
bool stack_isfull(pilha p){
    return p.topo == MAX;
}

///: imprime a lista
void imprimir(pilha p){
    int i;
    printf("\n\tLISTA:\n");
    for(i = p.topo-1; i >= 0; i--){
        printf("\t%d\n", p.itens[i]);
    }
}
