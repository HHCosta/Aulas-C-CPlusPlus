#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>
#include "QuickSort.h"

int main(){

    int v[10] = {10,9,8,7,6,5,4,3,2,1};
    int inicio = 0;
    int fim = 10;

    Quick(v, inicio, fim);

    return 0;
}
