#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Definindo variáveis
    int a = 15;
    int b = 10;
    int c = 5;

    //Soma
    printf("A soma de %d e %d eh = %d", a, b, a + b);

    //Subtração
    printf("\nA subtacao de %d e %d eh = %d", a, b, a - b);

    //Divisão
    printf("\nA divisao de %d e %d eh = %d", a, c, a / c);

    //Multiplicação
    printf("\nA multiplicacao de %d e %d eh = %d", a, b, a * b);

    //Resto da divisão
    printf("\nO resto da divisão entre %d e %d eh = %d", a, b, a % b);

    //Número absoluto
    printf("\n O numero absoluto de -3 eh = %d", abs(-3));
}
