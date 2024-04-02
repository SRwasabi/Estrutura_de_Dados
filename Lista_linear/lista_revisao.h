#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdbool.h>
#define MAX 5

typedef int t_dado;
typedef struct{
    t_dado itens[MAX];
    int qnt;
}lista;

void iniciar(lista *l);
bool acessar(lista l, int pos);
bool alterar(lista *l, t_dado num, int pos);
bool inserir(lista *l, t_dado num, int pos);
bool remover(lista *l, int pos);
int tamanho(lista l);
void imprimir(lista l);

#endif // LISTA_H
