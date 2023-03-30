#include <stdio.h>
#include <stdlib.h>

void main(){
int i;

    for(i=10;i>=0;i--){
        printf("\n%d", i);
}

    i = 10;
    while(i>=0){
        printf("\n%d", i);
        i--;
    }

    i = 10;
    do{
        printf("\n%d", i);
        i--;

    }while(i>=0);

}
