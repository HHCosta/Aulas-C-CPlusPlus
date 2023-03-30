#include <stdio.h>
#include <stdlib.h>

void main(){

    float lado1, lado2, lado3;

    printf("Coloque os 3 tamanho dos 3 lados do triangulo:");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if((lado1 == lado2) && (lado2 == lado3)){

        printf("Esse triangulo eh equilatero");


    }else{
        if((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3)){

            printf("Pelo menos 2 lados sao iguais, mas nao todos\n");
        };

    printf("Esse triangulo nao eh equilatero");


    }



}
