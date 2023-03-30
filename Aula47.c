#include <stdio.h>
#include <stdlib.h>

void main(){
    float valores[3];
    int cont;
    for(cont=0;cont<=2;cont++){
        printf("Escreva o valor da posicao %d \n", cont);
        scanf("%f", &valores[cont]);

    }

    float media = (valores[0] + valores[1] + valores[2]) /3;
    printf("A media eh: %f", media);

}
