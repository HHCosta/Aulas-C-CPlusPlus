#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>
#include "Busca.h"

int busca_binaria(int vetor[10], int ValorProcurado, int *posicao){

    int esquerda = 0;
    int direita = 10 - 1;
    int meio;
    meio = direita - esquerda;

    while(esquerda <= direita){
        if(ValorProcurado == meio){

            return 1;
        }
        if(ValorProcurado < meio){

            direita = meio - 1;
        }
        else{

            esquerda = meio + 1;
        }

    }
    return - 1;
}
