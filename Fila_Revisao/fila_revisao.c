#include "fila_revisao.h"

void iniciar(fila *f){
    f->total = 0;
}


bool entrar(fila *f, t_dado num){
    if(cheio(*f)) return false;

    f->itens[f->total++] = num;
    return true;
}


bool sair(fila *f){
    if(vazio(*f)) return false;

    int i;
    for(i = 0; i < f->total; i++){
        f->itens[i] = f->itens[i+1];
    }
    f->total--;
    return true;
}

int tamanho(fila f){
    return f.total;
}

bool vazio(fila f){
    return(f.total == 0);
}

bool cheio(fila f){
    return(f.total == MAX);
}

///: imprime a lista
void imprimir(fila f){
    int i;
    printf("\n\tFILA:\n");
    printf("\t");
    for(i = 0; i < f.total; i++){
        printf(" %d", f.itens[i]);
    }
    printf("\n");
}
