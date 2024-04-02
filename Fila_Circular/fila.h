#ifndef FILA_H
#define FILA_H
#include <stdbool.h>
#define MAX 5

typedef int queue_info;
typedef struct{
    queue_info itens[MAX];
    int comeco_, final_, qnt;
}fila;

///inicia a fila
void init_queue(fila *f);
///inserir na fila
bool enqueue(fila *f, queue_info v);
///remover da fila
queue_info dequeue(fila *f);
///fila estah cheia?
bool queue_isfull(fila f);
///fila estah vazia?
bool queue_isempty(fila f);
///printa a fila
void queue_print(fila f);

#endif // FILA_H
