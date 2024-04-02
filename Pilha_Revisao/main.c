#include <stdio.h>
#include <stdlib.h>
#include "pilha_revisao.h"

int main()
{
    pilha p;
    iniciar(&p);
    int c = 1;
    t_dado n;
    while(c != 0){
        printf("\n\t0 - sair\n\t1 - push\n\t2 - pop\n\t3 - tamanho\n\t4 - vazio\n\t5 - cheio\n\t6 - imprimir\n\t");
        scanf("%d", &c);
        switch(c){

bool cheio(pilha p);
void imprimir(pilha p);
        case 0:
            printf("\n\tAdeus\n");
            break;
        case 1:
            printf("\n\tnum que deseja inserir: ");
            scanf("%d", &n);
            if(push(&p, n)) printf("\tpush com sucesso\n");
            else printf("\tNao foi possivel efetuar push\n");
            break;
        case 2:
            if(pop(&p)) printf("\tpop com sucesso\n");
            else printf("\tNao foi possivel efetuar pop\n");
            break;
        case 3:
            n = tamanho(p);
            printf("\n\ttamanho: %d\n", n);
            break;
        case 4:
            if(vazio(p)) printf("\n\tA pilha esta vazia\n");
            else printf("\n\tA pilha NAO esta vazia\n");
            break;
        case 5:
            if(cheio(p)) printf("\n\tA pilha esta cheia\n");
            else printf("\n\tA pilha NAO esta cheia\n");
            break;
        case 6:
            imprimir(p);
            break;
        default:
            printf("\n\tNao ha essa opcao\n");
            break;

        }
    }

}
