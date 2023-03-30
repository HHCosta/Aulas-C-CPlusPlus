#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>
using namespace std;
int Shell(int vetor[10]){

    int i,j,atual,x;
    int h = 3;

    while(h<10){

       h = 3*h+1;

    }

    while(h > 1){

        h = h /3;

    for(i = h;i < 10;i++){

        j = i - h;

        atual = vetor[i];

        while((j >= 0) && (atual < vetor[j] )){

            vetor[j +h]= vetor[j];


            j = j-h;
        }
        vetor[j +h] = atual;


        for(x=0;x<10;x++){
            cout << vetor[x] << " ";
        }

        cout << "\n";

    }


    }

    return 0;

}
