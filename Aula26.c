#include <stdio.h>
#include <stdlib.h>

void main(){

    float a, b, c;

    printf("Escreva 3 valores:");
    scanf("%f %f %f", &a, &b, &c);

    float soma = (a + b + c) /3;
    if(soma < 7){
        printf("O aluno foi reprovado");

    }else{
        printf("O aluno foi aprovado");

    }



}
