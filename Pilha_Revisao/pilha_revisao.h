#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#include <stdbool.h>
#define MAX 5

typedef int t_dado;
typedef struct{
    t_dado itens[MAX];
    int topo;
}pilha;

void iniciar(pilha *p);
bool push(pilha *p, t_dado num);
bool pop(pilha *p);
int tamanho(pilha p);
bool vazio(pilha p);
bool cheio(pilha p);
void imprimir(pilha p);

#endif // PILHA_H
