#include <stdio.h>
#include <stdlib.h>

void main(){

    int a, b, c;

    printf("Coloque 3 notas:");
    scanf("%d %d %d", &a, &b, &c);

    //printf("a");

    int multiplicacao = a * b * c;

    printf("\nA multiplicacao entre elas eh: %d", multiplicacao);


}
