#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    float resultado;
    int numeros;
    float valor1, valor2, valor3;
    int opcao;

    printf("Voce quer uma operacao com 2 ou 3 numeros? Se for de 2 numeros digite 1. Se for de 3 digite 2\n ");
    scanf("%d", &numeros);

    if(numeros == 2)
    {
        printf("Escolha os numeros para a operacao:\n");
        scanf("%f %f %f", &valor1, &valor2, &valor3 );

        printf("Escolha a operacao: 1-Soma 2-Subtracao 3-Divisao 4-multiplicacao\n");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                resultado = (valor1 + valor2 + valor3);
                printf("O resultado eh: %f", resultado);
                break;

            case 2:
                resultado = (valor1 - valor2 - valor3);
                printf("O resultado eh: %f", resultado);
                break;

            case 3:
                resultado = (valor1 / valor2 / valor3);
                printf("O resultado eh: %f", resultado);
                break;

            case 4:
                resultado = (valor1 * valor2 * valor3);
                printf("O resultado eh: %f", resultado);
                break;

            default:
                printf("Nao existe essa opcao");
                break;
        }
    }

    if(numeros == 1)
    {
        printf("Escolha os numeros para a operacao:\n");
        scanf("%f %f", &valor1, &valor2 );

        printf("Escolha a operacao: 1-Soma 2-Subtracao 3-Divisao 4-multiplicacao\n");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                resultado = (valor1 + valor2);
                printf("O resultado eh: %f", resultado);
                break;

            case 2:
                resultado = (valor1 - valor2);
                printf("O resultado eh: %f", resultado);
                break;

            case 3:
                resultado = (valor1 / valor2);
                printf("O resultado eh: %f", resultado);
                break;

            case 4:
                resultado = (valor1 * valor2);
                printf("O resultado eh: %f", resultado);
                break;

            default:
                printf("Nao existe essa opcao");
                break;
        }
    }
}
