#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <new>
#include <string>
#include <time.h>
using namespace std;

void limpaTela(){
    system("CLS");
}

int menuInicial(){
    int opcao = 0;

    while(opcao < 1 || opcao > 3){
        limpaTela();
        cout << "Bem vindo ao jogo\n";
        cout << "Opcao 1 - Jogar\n";
        cout << "Opcao 2 - Sobre\n";
        cout << "Opcao 3 - Sair\n";
        cout << "Escolha uma das opcoes e aperte ENTER\n";

        cin >> opcao;

        switch(opcao){

        case 1:
            cout << "Jogo iniciado";
            break;
        case 2:
            cout << "Incformacoes do jogo:";
            break;
        case 3:
            cout << "Ate mais";
            break;
        }
    }
}

int main(){

    menuInicial();
    return 0;
}

