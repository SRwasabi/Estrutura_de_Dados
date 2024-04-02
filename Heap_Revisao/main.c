#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 6

///FILHOS
#define filho_esquerdo(i) (2 * i + 1)
#define tem_filho_direito (idx_filho < ultimo_elemento)
#define filho_direito_menor_que_esquerdo (a[idx_filho + 1] < a[idx_filho])
#define filho_existe (idx_filho <= ultimo_elemento)
#define filho_menor_que_pai (a[idx_filho] < elemento_troca)

///PAI E FILHO
#define troca_pai_pelo_filho (a[idx_troca] = a[idx_filho])
#define atualiza_indice_de_filho (idx_troca = idx_filho)

void make_heap_min(int a[], int n);
void mostrar_vetor(int *a, int n);

int main(){
    int dados[MAX], i;

    srand(408);
    for(i = 0; i < MAX; i++){
        dados[i] = 1+(rand()%60);
    }

    mostrar_vetor(dados, MAX);
    make_heap_min(dados, MAX);
    mostrar_vetor(dados, MAX);

    return 0;
}

void make_heap_min(int a[], int n){
    int meio = n/2, idx_troca, idx_filho, elemento_troca, ultimo_elemento = n-1;
    while(meio > 0){
        meio--;
        idx_troca = meio; //Pega a localização do primeiro pai
        idx_filho = filho_esquerdo(meio); //pega a localização do filho esquerdo
        elemento_troca = a[meio]; // Armazena o valor do pai

        //Verifica se:
        if(tem_filho_direito && filho_direito_menor_que_esquerdo){
            idx_filho++; //Filho de comparação agora é o esquerdo
        }

        while(filho_existe && filho_menor_que_pai){
            troca_pai_pelo_filho;
            atualiza_indice_de_filho;
            idx_filho = filho_esquerdo(idx_filho); //Pega o indice para ver se vai "descer mais" (slide do professor: 44 -> 6 -> 42)

            //Verifica se:
            if(tem_filho_direito && filho_direito_menor_que_esquerdo){
                idx_filho++; //Filho de comparação agora é o esquerdo
            }
        }
        a[idx_troca] = elemento_troca; //Atualiza o pai
    }
}

void mostrar_vetor(int *a, int n){
    int i;

    for(i = 0; i < n; i++){
        printf("[%02d]", a[i]);
    }
    printf("\n");
}
