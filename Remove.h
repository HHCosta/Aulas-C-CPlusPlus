#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>

using namespace std;
void Remove(int pilha[10], int *topo){

    if(*topo == -1){
        cout << "A pilha esta vazia";
    }else{

        cout << "Valor removido:" << pilha[*topo];
        pilha[*topo] = 0;
        *topo = *topo - 1;
    }


}
