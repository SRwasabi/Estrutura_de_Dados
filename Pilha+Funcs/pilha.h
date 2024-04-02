#ifndef PILHA_H
#define PILHA_H
#include <stdbool.h>
#include <stdio.h>
typedef char t_dado;
#define MAX 10
typedef struct{
    t_dado itens[MAX];
    int topo;
}pilha;

///: inicializa a pilha p no estado vazio
void stack_init(pilha *p);
///: insere o elemento x no topo da pilha p
bool push(pilha *p, t_dado x);
///: remove e devolve o elemento do topo da pilha p
//t_dado pop(pilha *p);
bool pop(pilha * p, t_dado * r);
///: acessa o elemento do topo da pilha p devolvendo uma cópia do seu valor
t_dado top(pilha p);
///: devolve verdadeiro se a pilha p estiver vazia e falso, caso contrário
bool stack_isempty(pilha p);
///: devolve verdadeiro se a pilha p estiver cheia e falso, caso contrário
bool stack_isfull(pilha p);
///: imprime a lista
void imprimir(pilha p);


#endif // PILHA_H
