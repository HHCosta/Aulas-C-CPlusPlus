#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>
#include <string.h>

using namespace std;

int main(){



    int c;

    FILE *file;
    file = fopen("Texto.txt", "r");

    if(file){
        while((c = getc(file)) != EOF){

            printf("%c", c);
        }

    fclose(file);
    }
    return 0;
}


