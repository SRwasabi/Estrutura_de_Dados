#include "fila.h"

///inicia a fila
void init_queue(fila *f){
    f->qnt = f->comeco_ = f->final_ = 0;
    int i;
    for(i = 0; i < MAX; i++) f->itens[i] = 0;
}

///inserir na fila
bool enqueue(fila *f, queue_info v){
    if(queue_isfull(*f)) return 0;

    if((f->final_) == MAX && f->comeco_ != 0){
        int i;
        for(i = 0; (i + f->comeco_) < f->final_ ; i++){
            f->itens[i] = f->itens[i+f->comeco_];
        }
        f->final_ = f->final_ - f->comeco_;
        f->comeco_ = 0;
    }
    f->itens[f->final_] = v;
    f->final_ = (f->final_ + 1);
    f->qnt++;
}

///remover da fila
queue_info dequeue(fila *f){
    ///verifica se ela esta vazia
    if(queue_isempty(*f)) return 0;

        int n = f->itens[f->comeco_];
        f->itens[f->comeco_] = 0;
        f->comeco_++;
        f->qnt--;
        return n;
    }

///fila estah cheia?
bool queue_isfull(fila f){
    return (f.qnt == MAX);
}

///fila estah vazia?
bool queue_isempty(fila f){
    return (f.qnt == 0);
}

void queue_print(fila f){
    int i;
    printf("\t");
    for(i = f.comeco_; i < f.final_; i++){
        printf("[%d] ", f.itens[i]);
    }
    printf("\n");
}

