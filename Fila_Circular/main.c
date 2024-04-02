#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    queue_info n;
    int op;
    fila f;

    init_queue(&f);
    do{
        printf("\n\tESCOLHA DENTRE AS OPÇOES: \n\t0- sair\n\t1- enqueue\n\t2- dequeue\n\t3- queue_isfull?\n\t4- queue_isempty?\n\t5- queue_print\n\n\t");
        scanf("%d", &op);
        switch(op){
    case 0:
        printf("\n\tAdeus...\n");
        break;
    case 1:
        printf("\n\tDigite o valor que deseja inserir: ");
        scanf("%d", &n);
        if(enqueue(&f, n))printf("\n\tAlocado com sucesso!\n");
        else printf("\n\tNao foi possivel alocar, lista cheia!");
        break;
    case 2:
        n = dequeue(&f);
        printf("\n\tValor %d, foi retirado\n", n);
        break;
    case 3:
        if(queue_isfull(f))printf("\n\tA fila estah cheia\n");
        else printf("\n\tA fila nao esta cheia\n");
        break;
    case 4:
        if(queue_isempty(f))printf("\n\tA fila estah vazia\n");
        else printf("\n\tA fila nao esta vazia\n");
        break;
    case 5:
        queue_print(f);
        break;
    default:
        printf("\n\tEntre 0 a 5 amigao!\n\n");
        break;

        }

    }while(op != 0);



return 0;
}
