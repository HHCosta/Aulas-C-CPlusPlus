#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>
using namespace std;
int Quick(int vetor[10], int inicio, int fim){



    int aux, esq, dir, pivo, meio, x;
    esq = inicio;
    dir = fim;

    meio = (int) ((esq + dir) / 2);
    pivo = vetor[meio];


    while(dir  > esq){

        while(vetor[esq] < pivo){
            esq = esq + 1;
        }

        while(vetor[dir] > pivo){
            dir = dir - 1;
        }

        if(esq <= dir){

            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;

            esq = esq + 1;
            dir = dir - 1;
        }

        for(x=0;x<10;x++){

                cout << vetor[x] << "-";
        }
        cout << "\n";



    }


    if(inicio < dir){
        Quick(vetor, inicio, dir);
    }

    if(esq > fim){
        Quick(vetor, esq, inicio);
    }

    return 0;
}
