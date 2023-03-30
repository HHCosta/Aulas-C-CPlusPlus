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

string retornaPalavraComMascara(string palavra, int tamanhoDaPalavra){

    int cont = 0;
    string palavraComMascara;

    while(cont < tamanhoDaPalavra){
        palavraComMascara += "_";
        cont++;
    }
    return palavraComMascara;
}

string retornaPalavraAleatoria(){

    string palavras[3] = { "abacaxi", "manga", "morango"};

    int indiceAleatorio = rand() % 3;

    return palavras[indiceAleatorio];
}
void exibeStatus(string palavraComMascara, int tamanhoDaPalavra, int tentativasRestantes, string letrasArriscadas, bool letraJaArriscada, string mensagem){

    cout << mensagem;
    cout << "\nPalavra com Mascara: " << palavraComMascara << "(Tamanho:" << tamanhoDaPalavra << ")" "\n";
    cout << "Ainda restam " << tentativasRestantes << " tentativas\n";

    int cont;
    cout << "Letras Arriscadas:";
    for(cont = 0; cont < letrasArriscadas.size(); cont++){
        cout << letrasArriscadas[cont] << ", ";
    }


}

int jogar(int numeroDeJogadores){

    string palavra;
    char letra;

    if(numeroDeJogadores == 1){
        palavra = retornaPalavraAleatoria();
    }else{
        cout << "Digite uma palavra\n";
        cin  >> palavra;
    }


    int tamanhoDaPalavra = palavra.size();
    int opcao;
    string letrasArriscadas;
    string mensagem =  "Bem-vindo ao jogo";
    string palavraComMascara = retornaPalavraComMascara(palavra, tamanhoDaPalavra);

    int tentativas = 0, maxtentativas = 10, cont;


    while(palavra != palavraComMascara && maxtentativas - tentativas > 0){
        bool acertouLetra = false;
        bool letraJaArriscada = false;
        limpaTela();
        exibeStatus(palavraComMascara, tamanhoDaPalavra, maxtentativas - tentativas, letrasArriscadas, letraJaArriscada, mensagem);

        cout << "Digite uma letra\n";
        cin >> letra;


        for(cont=0;cont<tentativas;cont++){

            if(letrasArriscadas[cont] == letra){
                letraJaArriscada = true;
                mensagem = "Essa letra ja foi digitada";
            }

        }

        if(letraJaArriscada == false){

            letrasArriscadas += tolower(letra);

            for(cont = 0; cont < tamanhoDaPalavra; cont++){

                if(palavra[cont] == tolower(letra)){

                    palavraComMascara[cont] = palavra[cont];

                    mensagem = "Parabens voce acertou a letra";

                    acertouLetra = true;
                }

            }
            if(acertouLetra == false){
                mensagem = "Voce errou a letra";
            }
            tentativas++;
        }

    }

    if(palavraComMascara == palavra){
        limpaTela();
        cout << "Parabens, voce ganhou";
        cout << "\nVoce deseja reiniciar o jogo?";
        cout << "\n1- Sim";
        cout << "\n2- Nao";
        cin >> opcao;
        return opcao;
    }else{
        limpaTela();
        cout << "Voce perdeu";
        cout << "\nVoce deseja reiniciar o jogo?";
        cout << "\n1- Sim";
        cout << "\n2- Nao";
        cin >> opcao;
        return opcao;
    }


}

int menuInicial(){
    int opcao = 0;

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

                cout << "Jogo iniciado\n";
                if(jogar(1) == 1){
                    menuInicial();
                }
                break;

            case 2:

                cout << "Jogo iniciado\n";
                if(jogar(2) == 1){
                    menuInicial();
                }
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
    srand((unsigned)time (NULL));
    menuInicial();
    return 0;
}


