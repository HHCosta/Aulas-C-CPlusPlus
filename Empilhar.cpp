#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>
#include "Empilhar.h"
#include "Remove.h"

using namespace std;
int main(){

    int i;
    int valor = 10;
    int v[10] = {0,0,0,0,0,0,0,0,0,0};
    int topo = -1;

    for(i=0;i<9;i++){

        cout << v[i] << "-";
    }

    cout << "\n";

    Empilhar(v, valor , &topo);
    Empilhar(v, 5 , &topo);
    Empilhar(v, 20 , &topo);


    for(i=0;i<9;i++){

        cout << v[i] << "-";
    }

    cout << "\n";

    Remove(v, &topo);

    cout << "\n";

    for(i=0;i<9;i++){

        cout << v[i] << "-";
    }

}
