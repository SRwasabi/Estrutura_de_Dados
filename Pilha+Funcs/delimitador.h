#ifndef DELIMITA_H
#define DELIMITA_H
#include "pilha.h"

///: Verifica se fecha algum delimitador
bool car_fecha(char a);
///: Verifica a e ve se ele é um delimitador sendo aberto
bool car_abre(char a);
///: Verifica se combinam
bool car_combina(char a, char b);
///: Le o arquivo e roda as demais functions
void casamento_delimitadores();

#endif // DELIMITA_H
