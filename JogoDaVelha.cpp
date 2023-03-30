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

int menuInicial();

int iniciaTabuleiro(char tabuleiro[3][3]){
    int linha,coluna;

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            tabuleiro[linha][coluna] = '-';
        }

    }
}

void mapaTabuleiro(){

    cout << "Mapa do tabuleiro:";
    cout << "\n7 | 8 | 9";
    cout << "\n4 | 5 | 6";
    cout << "\n1 | 2 | 3\n";
}

int confereTabuleiro(char tabuleiro[3][3]){

    int linha, coluna;

     for(linha= 0; linha < 3; linha++){
            if(tabuleiro[linha][0] == 'X' && tabuleiro[linha][0] == tabuleiro[linha][1] && tabuleiro[linha][1] == tabuleiro[linha][2]){

                return 1;

            }else if(tabuleiro[linha][0] == 'O' && tabuleiro[linha][0] == tabuleiro[linha][1] && tabuleiro[linha][1] == tabuleiro[linha][2]){

                return 2;

            }

        }
        for(coluna= 0; coluna < 3; coluna++){
            if(tabuleiro[0][coluna] == 'X' && tabuleiro[0][coluna] == tabuleiro[1][coluna] && tabuleiro[1][coluna] == tabuleiro[2][coluna]){

                return 1;

            }else if(tabuleiro[0][coluna] == 'O' && tabuleiro[0][coluna] == tabuleiro[1][coluna] && tabuleiro[1][coluna] == tabuleiro[2][coluna]){

                return 2;

            }
        }

        if(tabuleiro[0][0] != '-' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]){

            if(tabuleiro[0][0] == 'X'){

                return 1;

            }else{

                return 2;

            }

        }

        if(tabuleiro[0][2] != '-' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]){

            if(tabuleiro[0][2] == 'X'){

                return 1;

            }else{

                return 2;

            }
        }
    return 0;
}


int exibeTabuleiro(char tabuleiro[3][3]){
    int linha,coluna;
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            cout << tabuleiro[linha][coluna];
        }
        cout << "\n";
    }

}

int jogar(string nomeDoJogador1, string nomeDojogador2, int pontuacao1, int pontuacao2){
    int linha,coluna,colunaDigitada,linhaDigitada;
    int estadoDoJogo = 1, turno = 1;
    char tabuleiro[3][3];
    int turnoDoJogador = 1;
    int rodada = 0;
    string  nomeDoJogadorAtual;
    int opcao = 0;
    bool posicaoRepetida = false;
    int posicao;

    cout << "\n";



    iniciaTabuleiro(tabuleiro);



    while(rodada < 9 && estadoDoJogo == 1 ){
        limpaTela();
        cout << "Pontuacao: " << nomeDoJogador1 << " " << pontuacao1 << " " << "x " << nomeDojogador2 << " " << pontuacao2 << "\n";
        exibeTabuleiro(tabuleiro);
        mapaTabuleiro();
        cout << "Rodada:" << rodada << "\n";
        if(turnoDoJogador==1){
            nomeDoJogadorAtual = nomeDoJogador1;
        }else{
            nomeDoJogadorAtual = nomeDojogador2;
        }
        posicaoRepetida = false;

        int posicoes[9][2] = {{2,0},{2,1},{2,2},{1,0},{1,1},{1,2},{0,0},{0,1},{0,2}};

        while(posicaoRepetida == false){

            cout << nomeDoJogadorAtual << ", digite a posicao conforme o mapa acima:";
            cin >> posicao;

            linhaDigitada = posicoes[posicao-1][0];
            colunaDigitada = posicoes[posicao-1][1];

            if(tabuleiro[linhaDigitada][colunaDigitada] == '-')
            {
                posicaoRepetida = true;
                if(turnoDoJogador == 1){
                    tabuleiro[linhaDigitada][colunaDigitada] = 'X';
                    turnoDoJogador = 2;
                }else{
                    tabuleiro[linhaDigitada][colunaDigitada] = 'O';
                    turnoDoJogador = 1;
                }
            }
        }


        if(confereTabuleiro(tabuleiro) == 1){
            cout << "Jogador X venceu\n\n";
            pontuacao1++;
            estadoDoJogo = 0;
        }else if(confereTabuleiro(tabuleiro) == 2){
            cout << "Jogador O venceu\n\n";
            pontuacao2++;
            estadoDoJogo = 0;
        }

        rodada++;
    }
    exibeTabuleiro(tabuleiro);
    cout << "Fim de jogo";
    cout << "\nO que deseja fazer?";
    cout << "\n1 Continuar jogando";
    cout << "\n2 Voltar ao menu inicial";
    cout << "\n3 Sair";
    cin >> opcao;
    if(opcao == 1){
        jogar(nomeDoJogador1,nomeDojogador2,pontuacao1,pontuacao2);
    }else if(opcao = 2){
        menuInicial();
    }
}

int menuInicial(){
    int opcao = 0;
    string nomeDoJogador1, nomeDojogador2;

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

            cout << "Digite o nome do jogador 1\n";
            cin >> nomeDoJogador1;
            cout << "Digite o nome do jogador 2\n";
            cin >> nomeDojogador2;

            cout << "Jogo iniciado";
            jogar(nomeDoJogador1,nomeDojogador2,0,0);
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
