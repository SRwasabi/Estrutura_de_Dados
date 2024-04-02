#include <stdio.h>
#include <stdlib.h>
#include "lista_revisao.h"

int main()
{
    lista l;
    iniciar(&l);
    int c = 1;
    int k;
    t_dado n;
    while(c != 0){
        printf("\n\t0 - sair\n\t1 - acessar\n\t2 - alterar\n\t3 - inserir\n\t4 - remover\n\t5 - tamanho\n\t6 - imprimir\n\t");
        scanf("%d", &c);
        switch(c){
        case 0:
            printf("\n\tAdeus\n");
            break;
        case 1:
            printf("\n\ta posicao que deseja acessar: ");
            scanf("%d", &k);
            if(acessar(l, k)) printf("\tacessado com sucesso\n");
            else printf("\tNao foi possivel acessar\n");
            break;
        case 2:
            printf("\n\ta posicao que deseja modificar: ");
            scanf("%d", &k);
            printf("\tnovo num: ");
            scanf("%d", &n);
            if(alterar(&l, n, k)) printf("\tmodificado com sucesso\n");
            else printf("\tNao foi possivel modificar\n");
            break;
        case 3:
            printf("\n\tnum que deseja inserir: ");
            scanf("%d", &n);
            printf("\ta posicao que deseja inserir: ");
            scanf("%d", &k);
            if(inserir(&l, n, k)) printf("\tinserido com sucesso\n");
            else printf("\tNao foi possivel inserir\n");
            break;
        case 4:
            printf("\n\to valor da posicao que deseja remover: ");
            scanf("%d", &k);
            if(remover(&l, k)) printf("\tremovido com sucesso\n");
            else printf("\tNao foi possivel remover\n");
            break;
        case 5:
            n = tamanho(l);
            printf("\n\ttamanho: %d\n", n);
            break;
        case 6:
            imprimir(l);
            break;
        default:
            printf("\n\tNao ha essa opcao\n");
            break;

        }
    }

}
