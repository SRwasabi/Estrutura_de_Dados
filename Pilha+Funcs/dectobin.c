#include "dectobin.h"
#include "pilha.h"

///: Converte decimal para binário
void dectobin(){
    pilha p;
    int x;
    stack_init(&p);
    printf("\n\tDigite o valor o qual quer converter: ");
    scanf("%d", &x);
    while (x > 0){
        int bin = x % 2;
        push(&p, bin);
        x /= 2;
    }
    printf("\n\t");
    while(!stack_isempty(p)){
        //testar dps sobre colocar 0s na frente
        if(p.topo%4 == 0){
            printf(" ");
        }
        pop(&p, &x);
        printf("%d", x);
    }
    printf("\n");
}

