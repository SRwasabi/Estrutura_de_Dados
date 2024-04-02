#include "delimitador.h"
/**
TESTE ESTA CORRETO PORQUE ESTÁ SENDO CONSIDERADO COMO UMA STRING POIS ESTÁ ENTRE ""
O QUE FAZER PARA NAO SER CONSIDERADO COMO ERRO?
*/

///: Verifica se fecha algum delimitador
bool car_fecha(char a){
    return(a == '}' || a == ']' || a == ')');
}

///: Verifica a e ve se ele é um delimitador sendo aberto
bool car_abre(char a){
    return (a == '{' || a == '[' || a == '(' || a == '"');
}

///: Verifica se combinam
bool car_combina(char a, char b){
    switch(a){
    case '}': return b == '{'; ///Chave
    case ']': return b == '['; ///Colchete
    case ')': return b == '('; ///Parenteses
    }
    return false;
}

///: Le o arquivo e roda as demais functions
void casamento_delimitadores(){
    FILE * f;
    if((f = fopen ("teste.c", "r")) == NULL) return 0;

    int i = 0;
    char conteudo[1000];

    while((conteudo[i++] = fgetc(f)) != EOF);
    pilha p;
    stack_init(&p);

    int linha = 1, col;
    for(i = 0; conteudo[i] != EOF; i++){
        col++;
        if(conteudo[i] == '\n'){
            linha++;
            col = 0;
        }
        ///adiciona  se for verdadeiro
        if(car_abre(conteudo[i])) push(&p, conteudo[i]);
        ///vai percorrer o vetor até achar outro " e não constará os demais caracteres
        while(top(p) == '"' && conteudo[i] != EOF){
            ++i;
            col++;
            if(conteudo[i] == '"'){
                t_dado r;
                pop(&p, &r);
            }
            if(conteudo[i] == '\n'){
                linha++;
                col = 0;
            }
        }
        ///verifica se ainda há " na pilha
        if(top(p) == '"'){
                printf("Erro! Esperado o fechamento de \" (Linha %d | Coluna %d)\n", linha, col);
                    while(!stack_isempty(p)){
                        t_dado r;
                        pop(&p, &r);
                        printf(">%c\n", r);
                    }
                    return 0;
            }
        ///fecha se for verdadeiro
        if(car_fecha(conteudo[i])){

            ///checa para ver se combina
            if(car_combina(conteudo[i], top(p))){
                t_dado r;
                ///remove o topo pois foi fechado
                pop(&p, &r);
            }
            else {
                printf("Erro! Caracter \"%c\" esta sendo fechado sem ser aberto (Linha %d | Coluna %d)\n", conteudo[i], linha, col);
                while(!stack_isempty(p)){
                    t_dado r;
                    pop(&p, &r);
                    printf(">%c\n", r);
                }
                return 0;
            }
        }
    }
    printf("\n\tPrograma sem erro! :)\n");
}


