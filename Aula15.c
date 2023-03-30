#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Definindo os números
    float a = 2, b, c;

    scanf("%f", &b);
    scanf("%f", &c);

    //Contas
    float d = b + c;
    float e = d / a;

    //Mostrando resultado
    printf("A media entre %f e %f eh = %f", b, c, e);

}
