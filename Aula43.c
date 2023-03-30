#include <stdio.h>
#include <stdlib.h>

void main(){
    int cont;
    int valor;
    printf("digite um valor para verificar se ele eh primo ou nao:\n");
    scanf("%d", &valor);
    int i;

    for(i=1;i<= valor;i++)
    {
        int resto = valor%i;

        if(resto>0)
        {
            cont++;
        }
    }

    if(cont<2){
        printf("Esse numero nao eh primo");
    }else{
        printf("Esse numero eh primo");
    }

}
