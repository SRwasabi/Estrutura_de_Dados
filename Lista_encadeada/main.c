#include <stdio.h>
#include <stdlib.h>
#include "lista_emCasa.h"

int main(){
    int op, valor, anterior;
    No *lista = NULL;

    do{
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - InserirF\n\t3 - InserirM\n\t4 - Imprimir\n\t");
        scanf("%d", &op);

        switch(op){
        case 0:
            printf("\tEncerrando...\n");
            break;
        case 1:
            printf("\tDigite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(&lista, valor);
            break;
        case 2:
            printf("\tDigite um valor: ");
            scanf("%d", &valor);
            inserir_no_fim(&lista, valor);
            break;
        case 3:
            printf("\tDigite um valor e o valor de referencia: ");
            scanf("%d %d", &valor, &anterior);
            inserir_no_meio(&lista, valor, anterior);
            break;
        case 4:
            imprimir(lista);
            break;
        default:
            break;
        }

    }while(op != 0);

    return 0;
}
