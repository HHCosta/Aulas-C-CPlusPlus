#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Definindo vari�veis
    int a = 15;
    int b = 10;
    int c = 5;

    //Soma
    printf("A soma de %d e %d eh = %d", a, b, a + b);

    //Subtra��o
    printf("\nA subtacao de %d e %d eh = %d", a, b, a - b);

    //Divis�o
    printf("\nA divisao de %d e %d eh = %d", a, c, a / c);

    //Multiplica��o
    printf("\nA multiplicacao de %d e %d eh = %d", a, b, a * b);

    //Resto da divis�o
    printf("\nO resto da divis�o entre %d e %d eh = %d", a, b, a % b);

    //N�mero absoluto
    printf("\n O numero absoluto de -3 eh = %d", abs(-3));
}
