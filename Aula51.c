#include <stdlib.h>
#include <stdio.h>

void main(){
    int matriz[2][2];
    int j, i;

    printf("Digite 4 valores \n");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf ("%d", &matriz[ i ][ j ]);
        }
    }
    int aux1 = matriz[0][1], aux2 = matriz[0][0];
    matriz[0][0] = matriz[1][0];
    matriz[1][0] = aux2;
    matriz[0][1] = matriz[1][1];
    matriz[1][1] = aux1;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("A matriz %d %d eh: %d \n", i, j, matriz[i][j]);
        }
    }
}
