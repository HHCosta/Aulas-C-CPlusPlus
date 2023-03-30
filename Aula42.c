#include <stdio.h>
#include <stdlib.h>

void main(){

    printf("Se o resto da divisao for 0 o numero eh par, se nao eh impar");

    int i;
    //números pares de 10 a 20
    for(i=10;i<=20;i=i+2)
    {
        printf("\n%d. resto da divisao com 2 eh: %d", i, i %2);
    }

    //todos os números de 10 a 20
    for(i=10;i<=20;i++)
    {
        printf("\n%d. resto da divisao com 2 eh: %d", i, i %2);
    }


}
