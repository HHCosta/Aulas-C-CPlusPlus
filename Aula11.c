#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Definindo vari�vel
    int a = 10;

    //Imprimindo a vari�vel "a"
    printf("%d\n", a);

    //Mudando Valor
    a = 999;

    //Concatenando
    printf("O valor de a eh: %d\n", a);


    int b = 5;

    //Lendo Valores
    scanf("%d", &b);

    //fflush(stdin);

    printf("O valor de b eh: %d\n", b);

    //Imprimindo
    printf("Hello world\n ");

    //Pausando
    system("pause");
}
