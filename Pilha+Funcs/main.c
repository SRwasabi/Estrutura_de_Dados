#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "dectobin.h"

int main(){
    int op;
    pilha p;
    t_dado x;
    stack_init(&p);
    do{
        printf("\n\tESCOLHA DENTRE AS OPÇOES: \n\t0- sair\n\t1- push\n\t2- pop\n\t3- t_dado top\n\t4- stack_isempty\n\t5- stack_isfull\n\t6- Conversao para Binario\n\t7- Le arquivo teste.c\n\t8- imprimir \n\t");
        scanf("%d", &op);
        switch(op){
    case 0:
        printf("\n\tEncerrando\n");
        break;
    case 1:
        printf("\n\tDigite um numero para adicionar: ");
        scanf(" %c", &x);
        printf("\n\tfoi adicionado? %d\n", push(&p, x - '0'));
        break;
    case 2:
        pop(&p, &x);
        printf("\n\titem %d foi removido\n", x);

        break;
    case 3:
        printf("\n\t %d esta no topo da lista\n", top(p));
        break;
    case 4:
        printf("\n\t A lista esta vazia? %d\n", stack_isempty(p));
        break;
    case 5:
        printf("\n\t A lista esta cheia? %d\n", stack_isfull(p));
        break;
    case 6:
        dectobin(p, x);
        break;
    case 7:
        casamento_delimitadores();
        break;
    case 8:
        imprimir(p);
        break;
    default:
        printf("\n\tNao existe essa opcao\n");
        break;

        }

    }while(op != 0);
    return 0;
}


