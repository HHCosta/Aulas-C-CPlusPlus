#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
    int a = 50;
    //Lendo um valor ineiro

    printf("Neste momento a vale %d\n", a);
    printf("Digite o novo valor para a\n");
    scanf("%d", &a);
    printf("O novo valor de a eh %d\n", a);

        float b = 10.5;
    //Lendo um valor quebrado

    printf("Neste momento b vale %f\n", b);
    printf("Digite o novo valor para b\n");
    scanf("%f", &b);
    printf("O novo valor de b eh %f\n", b);

       //Lendo uma letra
      char c = 'k';

    printf("Neste momento c vale %c\n", c);
    fflush(stdin);
    printf("Digite o novo valor para c\n");
    scanf("%c", &c);
    printf("O novo valor de c eh %c\n", c);
}
