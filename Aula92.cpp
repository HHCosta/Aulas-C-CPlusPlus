#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>
#include "MergeSort.h"
int main(){

    int v[10] = {10,9,8,7,6,5,4,3,2,1};
    int esq = 0;
    int dir = 9;


    mergeSort(v, esq, dir);

    return 0;
}
