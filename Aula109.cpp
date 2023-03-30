#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <new>
#include <string>

struct estrutura{
    int Valor;
    struct estrutura *proximo;

};

int main(){

    estrutura *ponteiroEncadeada;

    estrutura *novoPrimeiroValor = new estrutura;
    novoPrimeiroValor->Valor = 13;
    novoPrimeiroValor->proximo = NULL;

    ponteiroEncadeada = novoPrimeiroValor;

    estrutura *novoSegundoValor = new estrutura;
    novoSegundoValor->Valor = 12;
    novoSegundoValor->proximo = NULL;

    ponteiroEncadeada->proximo = novoSegundoValor;

    while(ponteiroEncadeada != NULL){

        printf("\n Valor %d", ponteiroEncadeada->Valor);

        ponteiroEncadeada = ponteiroEncadeada->proximo;
    }
    return 0;


}
