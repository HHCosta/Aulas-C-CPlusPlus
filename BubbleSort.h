#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>

using namespace std;
int bubbleSort(int vetor[10]){

    int x, y, aux, i;

    for(x=0;x<10;x++){
        for(y=x+1;y<10;y++){
            if(vetor[x] > vetor[y]){
                cout << "\n";
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;

                for(i=0;i<10;i++){
                    cout << vetor[i] << " ";
                }

            }
       }
    }

    return 0;
}
