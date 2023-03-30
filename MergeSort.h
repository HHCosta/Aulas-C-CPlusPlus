#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>
using namespace std;
void merge(int vetor[10], int indiceEsquerdo, int meio, int indiceDireito){

    int i,j,k;
    int n1 = meio - indiceEsquerdo + 1;
    int n2 = indiceDireito - meio;

    int vetorEsquerdo[n1];
    int vetorDireito[n2];

    for(i=0;i<n1;i++){
        vetorEsquerdo[i] = vetor[indiceEsquerdo + i];
    }

    for(j=0;j<n1;j++){
        vetorDireito[j] = vetor[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = indiceEsquerdo;
    while(i < n1 && j < n2){

        if(vetorEsquerdo[i] <= vetorDireito[j]){
            vetor[k] = vetorEsquerdo[i];

            i++;
        }else{
            vetor[k] = vetorDireito[j];

            j++;
        }

        k++;
    }

    while(i<n1){
        vetor[k] = vetorEsquerdo[i];
        i++;
        k++;
    }

    while(j<n1){
        vetor[k] = vetorDireito[j];
        j++;
        k++;
    }


}

void mergeSort(int vetor[10], int indiceEsquerdo, int indiceDireito){

    if(indiceEsquerdo < indiceDireito){

        int x;

        int meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo)/2;


        mergeSort(vetor, indiceEsquerdo, meio);

        mergeSort(vetor, meio+1, indiceDireito);




        merge(vetor, indiceEsquerdo, meio, indiceDireito);

        for(x=0;x<10;x++){
            cout << vetor[x] << " ";
        }

        cout << "\n";

    }


}
