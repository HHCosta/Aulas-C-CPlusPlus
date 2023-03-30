#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <new>
#include <string>

int busca(int vetor[10], int ValorProcurado, int *posicao){

    int cont;

    bool ValorEncontrado = false;

    for (cont = 0; cont < 10; cont++){
        if(vetor[cont] == ValorProcurado){
            ValorEncontrado = true;
            *posicao = cont;

        }
    }

    if(ValorEncontrado){
        return 1;
    }else{
        return -1;
    }

}
