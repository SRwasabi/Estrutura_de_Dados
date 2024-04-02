#include <stdio.h>
#include <stdlib.h>
#include "fila_revisao.h"

int main()
{
    fila f;
    iniciar(&f);
    int c = 1;
    t_dado n;
    while(c != 0){
        printf("\n\t0 - sair\n\t1 - colocar\n\t2 - tirar\n\t3 - tamanho\n\t4 - vazio\n\t5 - cheio\n\t6 - imprimir\n\t");
        scanf("%d", &c);
        switch(c){
        case 0:
            printf("\n\tAdeus\n");
            break;
        case 1:
            printf("\n\tnum que deseja inserir: ");
            scanf("%d", &n);
            if(entrar(&f, n)) printf("\tentrou com sucesso\n");
            else printf("\tNao foi possivel entrar\n");
            break;
        case 2:
            if(sair(&f)) printf("\tsair com sucesso\n");
            else printf("\tNao foi possivel sair\n");
            break;
        case 3:
            n = tamanho(f);
            printf("\n\ttamanho: %d\n", n);
            break;
        case 4:
            if(vazio(f)) printf("\n\tA fila esta vazia\n");
            else printf("\n\tA fila NAO esta vazia\n");
            break;
        case 5:
            if(cheio(f)) printf("\n\tA fila esta cheia\n");
            else printf("\n\tA fila NAO esta cheia\n");
            break;
        case 6:
            imprimir(f);
            break;
        default:
            printf("\n\tNao ha essa opcao\n");
            break;

        }
    }

}
