#ifndef FILA_H
#define FILA_H

#include <stdio.h>
#include <stdbool.h>
#define MAX 5

typedef int t_dado;
typedef struct{
    t_dado itens[MAX];
    int total;
}fila;

void iniciar(fila *f);
bool entrar(fila *f, t_dado num);
bool sair(fila *f);
int tamanho(fila f);
bool vazio(fila f);
bool cheio(fila f);
void imprimir(fila f);

#endif // FILA_H
