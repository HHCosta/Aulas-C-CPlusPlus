#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>
#include "BubbleSort.h"

using namespace std;

int main(){
    int v[10] = {10,9,8,7,6,5,4,3,2,1};
    int i;



    for(i=0;i<10;i++){

        cout << v[i] << " ";

            }
    bubbleSort(v);

    return 0;
}
