#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <new>
#include <string>
#include <time.h>

using namespace std;
int menuInicial();

void limpaTela(){
    system("CLS");
}

void iniciaTabuleiro(char tabuleiro[10][10], char mascara[10][10]){
    int linha, coluna;

    for(linha = 0;linha<10;linha++){
        for(coluna=0;coluna<10;coluna++){
            tabuleiro[linha][coluna] = 'A';
            mascara[linha][coluna] = '*';
        }

    }
}

void verificaTiro(char tabuleiro[10][10], int linhaJogada, int colunaJogada,int *pontos, string *mensagem){

    switch(tabuleiro[linhaJogada][colunaJogada]){
    case 'P':
        *pontos = *pontos + 10;
        *mensagem = "Voce acertou um barco pequeno! (10pts)\n";
        break;
    case 'A':
        *mensagem = "Voce acertou a agua. (0pts)\n";
        break;
    }

}

void posicionaBarcos(char tabuleiro[10][10]){
    int linhaAleatoria, colunaAleatoria, quantidade = 10, cont, quantidadePosicionada = 0;

    while(quantidade > quantidadePosicionada){
        colunaAleatoria = rand() %10;
        linhaAleatoria = rand() %10;

        if(tabuleiro[linhaAleatoria][colunaAleatoria] == 'A'){
        tabuleiro[linhaAleatoria][colunaAleatoria] = 'P';
        quantidadePosicionada++;
        }
    }

}


void imprimeTabuleiro(char tabuleiro[10][10], char mascara[10][10], bool mostraGabarito){

    char blue[] = {0x1b, '[', ';', '3', '4', 'm', 0};
    char green[] = {0x1b, '[', ';', '3', '2', 'm', 0};
    char normal[] = {0x1b, '[', ';', '3', '9', 'm', 0};

    int linha, coluna;
    for(linha = 0;linha<10;linha++){
        cout << linha << " - ";
        for(coluna=0;coluna<10;coluna++){
            switch(mascara[linha][coluna]) {
                case 'A':
                    cout << blue << mascara[linha][coluna] << " " << normal;
                    break;
                case 'P':
                    cout << green << mascara[linha][coluna] << " " << normal;
                    break;
                default:
                    cout << mascara[linha][coluna] << " ";
                    break;
            }

        }
        cout << "\n";

    }
    cout << "\n\n";
    if(mostraGabarito == true){
        for(linha = 0;linha<10;linha++){

            for(coluna=0;coluna<10;coluna++){

                cout << tabuleiro[linha][coluna] << " ";
            }
            cout << "\n";

        }
    }
}

void exibeMapa(){
    int cont;
    for(cont = 0; cont < 10; cont++){
        if(cont == 0){
            cout << "    ";
        }
    cout << cont << " ";
    }
    cout << "\n";
    for(cont = 0; cont < 10; cont++){
        if(cont == 0){
            cout << "    ";
        }
    cout << "|" << " ";
    }
    cout << "\n";
}

void jogo(string nomeDoJogador){

    char tabuleiro[10][10],mascara[10][10];
    int linha, coluna;
    int linhaJogada, colunaJogada;
    int estadoDoJogo = 1;
    int pontos = 0;
    int tentativas = 0, maximoDeTentativas = 5;
    int opcao;
    string mensagem = "Bem vindo ao jogo!\n";

    iniciaTabuleiro(tabuleiro, mascara);
    while(tentativas < maximoDeTentativas){
        limpaTela();

        exibeMapa();
        posicionaBarcos(tabuleiro);
        imprimeTabuleiro(tabuleiro, mascara, false);

        cout << "Pontos:" << pontos << "\nTentativas Restantes:"<< maximoDeTentativas - tentativas << "\n";
        cout << "\nMensagem:" << mensagem;

        linhaJogada = -1;
        colunaJogada = -1;
        while((linhaJogada < 0 || colunaJogada < 0) || (linhaJogada > 9 || colunaJogada > 9 )){

        cout << nomeDoJogador << " Digite uma linha:";
        cin >> linhaJogada;
        cout << nomeDoJogador << " Digite uma coluna:";
        cin >> colunaJogada;
        }
        verificaTiro(tabuleiro, linhaJogada, colunaJogada, &pontos, &mensagem);

        mascara[linhaJogada][colunaJogada] = tabuleiro[linhaJogada][colunaJogada];
        tentativas++;
}

    cout << "\nFim de jogo. O que voce deseja fazer?\n\n";
    cout << "1- Jogar denovo\n";
    cout << "2- Voltar ao menu inicial\n";
    cout << "3- Sair\n";
    cin >> opcao;

    switch(opcao){
        case 1:
            jogo(nomeDoJogador);
            break;
        case 2:
            menuInicial();
    }


}

int menuInicial(){

    int opcao = 0;
    string nomeDoJogador;
    while(opcao < 1 || opcao > 3){
        limpaTela();
        cout << "Bem vindo ao jogo\n";
        cout << "Opcao 1 - Jogar sozinho\n";
        cout << "Opcao 2 - Jogar em dupla\n";
        cout << "Opcao 3 - Sobre\n";
        cout << "Opcao 4 - Sair\n";
        cout << "Escolha uma das opcoes e aperte ENTER\n";

        cin >> opcao;

        switch(opcao){

            case 1:

                cout << "Qual eh o seu nome?";
                cin >> nomeDoJogador;
                cout << "Jogo iniciado\n";
                jogo(nomeDoJogador);
                break;

            case 2:

                cout << "Jogo iniciado\n";

                break;


            case 3:
                cout << "Incformacoes do jogo:";
                limpaTela();
                cout << "Jogo desenvolvido por Heitor em 2022\n";
                    cout << "Opcao 1 - Voltar\n";
                    cout << "Opcao 2 - Sair\n";
                    cin >> opcao;
                    if(opcao == 1){
                        menuInicial();
                    }

                break;
            case 4:
                cout << "Ate mais";
                break;

        }
    }
}

int main(){
    srand((unsigned)time(NULL));
    menuInicial();
}


