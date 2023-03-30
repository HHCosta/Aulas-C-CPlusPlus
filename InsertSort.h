#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>

using namespace std;

int InsertSort(int vetor[10]){

    int atual, i, j, x;

    for(i = 1;i < 10;i++){

        j = i - 1;

        atual = vetor[i];

        while((j >= 0) && (atual < vetor[j] )){

            vetor[j +1]= vetor[j];


            j--;
        }
        vetor[j +1] = atual;


        for(x=0;x<10;x++){
            cout << vetor[x] << " ";
        }

        cout << "\n";

    }

    return 0;
}
