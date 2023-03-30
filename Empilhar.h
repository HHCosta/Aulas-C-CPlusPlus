#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>

using namespace std;
int Empilhar(int pilha[10], int valor, int *topo){

    if(*topo == 10 - 1){

        cout << "A pilha esta cheia";
    }else{

        *topo = *topo + 1;
        pilha[*topo] = valor;

    }


}
