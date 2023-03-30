#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>
#include "Busca.h"

int main(){
    int numero;
    int posEncontrada;
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    scanf("%d", &numero);
    int resultado = busca(v, numero, &posEncontrada);
    if(resultado == -1)
    {

        printf("Nao encontrado");
    }
    else
    {

        printf("Encontrado na posicao %d", posEncontrada);
    }


    return 0;
}
