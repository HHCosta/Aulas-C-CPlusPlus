#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <new>
#include <string>

using namespace std;

struct pessoa{
    string nome;
    int rg;
};

void limpaTela(){
    system("CLS");
}

void imprimeListaSequencial(pessoa *ponteiroSequencial, int tamanhoDaLista){

    int i;
    for(i=0;i<tamanhoDaLista;i++){
        cout << ponteiroSequencial[i].nome << "," << ponteiroSequencial[i].rg << "\n";
    }
}

void adcComecoSequencial(pessoa *&ponteiroSequencial,int *tamanhoDaLista,string nome,int rg){



    if(*tamanhoDaLista == 0){

        pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];

        novaListaSequencial[0].nome = nome;
        novaListaSequencial[0].rg = rg;


        ponteiroSequencial = novaListaSequencial;

    }else{

    pessoa *novaListaSequencial =  new pessoa[*tamanhoDaLista + 1];

    novaListaSequencial[0].nome = nome;
    novaListaSequencial[0].rg = rg;

    int i;
    for(i=0;i<*tamanhoDaLista;i++){

        novaListaSequencial[i + 1].nome = ponteiroSequencial[i].nome;
        novaListaSequencial[i + 1].rg = ponteiroSequencial[i].rg;

        ponteiroSequencial = novaListaSequencial;

    }

    }

    *tamanhoDaLista = *tamanhoDaLista + 1;
}

int main(){

    pessoa *ponteiroSequencial;

    int tamanhoDaLista = 2;

    pessoa *ExemploDeListaSequencial = new pessoa[2];

    ExemploDeListaSequencial[0].nome = "a";
    ExemploDeListaSequencial[0].rg = 123;
    ExemploDeListaSequencial[1].nome = "b";
    ExemploDeListaSequencial[1].rg = 321;

    ponteiroSequencial =  ExemploDeListaSequencial;

    imprimeListaSequencial(ponteiroSequencial, tamanhoDaLista);

    int rg;
    string nome;

    cout << "Escreva o nome";
    cin >> nome;
    cout << "Escreva o rg";
    cin >> rg;
    adcComecoSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);

    imprimeListaSequencial(ponteiroSequencial, tamanhoDaLista);

}
