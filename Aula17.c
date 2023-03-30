#include <stdio.h>
#include <stdlib.h>

void main(){

    int a, b;

    printf("Digite a primeira nota:");

    scanf("%d", &a);

    printf("Digite a segunda nota:");

    scanf("%d", &b);

    int resultado = abs(a - b);

    printf("\n O resultado eh: %d", resultado);




}


