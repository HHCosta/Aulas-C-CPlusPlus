#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>

using namespace std;

int SelectionSort(int vetor[10]){

    int posicaoDoMenorValor, aux, i, j, x;

    for(i=0;i<10;i++){

        posicaoDoMenorValor = i;

        for(j=i+1;j<10;j++){

            if(vetor[j]<vetor[posicaoDoMenorValor]){

                posicaoDoMenorValor = j;
            }

        }

        if(posicaoDoMenorValor != i){

            aux = vetor[i];
            vetor[i] = vetor[posicaoDoMenorValor];
            vetor[posicaoDoMenorValor] = aux;

        }
        for(x=0;x<10;x++){

            cout << vetor[x] << "-";
        }
        cout << "\n";
    }
    return 0;
}
