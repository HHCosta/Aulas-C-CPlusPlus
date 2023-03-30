#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <new>
#include <string>

using namespace std;

struct pessoa{
    string nome;
    int rg;
    struct pessoa *proximo;
};

void imprimeEncadeada(pessoa *ponteiroEncadeada){

    pessoa *p = ponteiroEncadeada;

    while(p != NULL){

        cout << p->nome << "," << p->rg << "\n";

        p = p->proximo;


    }
}

int retornaTamanho(pessoa *ponteiroEncadeada){

    if(ponteiroEncadeada == NULL)
    {

        return 0;
    }
    if(ponteiroEncadeada->nome == ""){
        return 0;
    }

    int tamanho = 0;

    pessoa *p = ponteiroEncadeada;

    while(p != NULL){

        p = p->proximo;

        tamanho++;

    }
    return tamanho;
}

void adcComecoEncadeada(pessoa *&ponteiroEncadeada, string nome, int rg){

    pessoa *novoValor = new pessoa;
    novoValor->nome = nome;
    novoValor->rg = rg;

    if(ponteiroEncadeada->nome == ""){
        novoValor->proximo = NULL;
    }else{
        novoValor->proximo = ponteiroEncadeada;
    }


    ponteiroEncadeada = novoValor;
}

void adcFimEncadeada(pessoa *&ponteiroEncadeada, string nome, int rg){
    pessoa *novoValor = new pessoa;
    novoValor->nome = nome;
    novoValor->rg = rg;
    novoValor->proximo = NULL;

    pessoa *p = ponteiroEncadeada;

    while(p != NULL){

        if(p->proximo == NULL){
            p->proximo =  novoValor;
            return;
        }

        p = p->proximo;
    }
}

void removeInicioEncadeada(pessoa *&ponteiroEncadeada){

    if(ponteiroEncadeada->proximo == NULL){

        pessoa *novoValor = new pessoa;
        novoValor->nome = "";
        novoValor->rg = 0;
        novoValor->proximo = NULL;

        ponteiroEncadeada = novoValor;
    }else{
        ponteiroEncadeada = ponteiroEncadeada->proximo;
    }
}

void adcPosicaoEncadeada(pessoa *&ponteiroEncadeada, string nome, int rg, int posicao){

    pessoa *novoValor = new pessoa;
    novoValor->nome = nome;
    novoValor->rg = rg;
    novoValor->proximo = NULL;

    pessoa *p = ponteiroEncadeada;


    int cont = 0;

    while(cont <= posicao){

        if(cont == posicao - 1){

            pessoa *aux = new pessoa;

            aux->proximo = p->proximo;

            p->proximo = novoValor;

            novoValor->proximo = aux->proximo;

            free(aux);
        }
        p = p->proximo;

        cont++;
    }


}
void limpaTela(){
    system("CLS");
}
string retornaNomeEncadeada(pessoa *&ponteiroEncadeada, int rg){


    string nome = "Nome nao encontrado";
    pessoa *p = ponteiroEncadeada;

    while(p != NULL){

        if(p->rg == rg){
            nome = p->nome;
            return nome;
        }

        p = p->proximo;
    }
    return nome;
}
void removePosicaoEncadeada(pessoa *&ponteiroEncadeada, int posicao){

        pessoa *p = new pessoa;
        p =  ponteiroEncadeada;

        int cont = 0;
        while(cont <= posicao){

            if(cont == posicao - 1){
                pessoa *aux = new pessoa;

                aux = p->proximo;

                p->proximo = aux->proximo;
            }

            p = p->proximo;

            cont++;
        }


}
void removeFimEncadeada(pessoa *&ponteiroEncadeada){

    pessoa *p = new pessoa;
    pessoa *aux =  new pessoa;

    p = ponteiroEncadeada;

    while(p->proximo != NULL){

        aux = p;

        p = p->proximo;
    }

    aux->proximo = NULL;
}

int main(){

    int funcaoDesejada = 1;

    pessoa *ponteiroEncadeada =  new pessoa;
    ponteiroEncadeada->nome = "";
    ponteiroEncadeada->rg = 0;
    ponteiroEncadeada->proximo = NULL;

    /*pessoa *novoPrimeiroValor = new pessoa;
    novoPrimeiroValor->nome = "a";
    novoPrimeiroValor->rg = 123;
    novoPrimeiroValor->proximo = NULL;

    ponteiroEncadeada = novoPrimeiroValor;

    pessoa *novoSegundoValor = new pessoa;
    novoSegundoValor->nome = "b";
    novoSegundoValor->rg = 321;
    novoSegundoValor->proximo = NULL;

    novoPrimeiroValor->proximo = novoSegundoValor;*/


    while(funcaoDesejada < 9 && funcaoDesejada > 0){

        cout << "Operacoes\n";
        cout << "1 - insersao de um node no inicio da lista.\n";
        cout << "2 - insersao de um node no fim da lista.\n";
        cout << "3 - insercao de um node na posicao N.\n";
        cout << "4 - Retirar um node no inicio da lista.\n";
        cout << "5 - Retirar um node no fim da lista.\n";
        cout << "6 - Retirar um node na posicao N.\n";
        cout << "7 - Procurar um node com o campo RG.\n";
        cout << "8 - Imprimir a lista.\n";
        cout << "9 - Sair do sistema\n";
        cout << "Aperte um numero e pressione ENTER.\n";
        cout << "\n\nTamanho atual:" << retornaTamanho(ponteiroEncadeada) << "\n";


        if(retornaTamanho(ponteiroEncadeada) == 0){
            cout << "Lista Vazia";
        }else{
            imprimeEncadeada(ponteiroEncadeada);
        }

        cin >> funcaoDesejada;

        limpaTela();

        string nome;
        int rg;
        int posicao;

        switch(funcaoDesejada){
            case 1:
                cout << "Opcao 1 foi escolhida. 1 - insersao de um node no inicio da lista.\n";

                cout << "Escreva o nome:";
                cin >> nome;
                cout << "Escreva o RG";
                cin >> rg;

                adcComecoEncadeada(ponteiroEncadeada, nome, rg);

                break;
            case 2:

                cout << "Opcao 2 foi escolhida. 2 - insersao de um node no fim da lista.\n";

                cout << "Escreva o nome:";
                cin >> nome;
                cout << "Escreva o RG";
                cin >> rg;

                if(retornaTamanho(ponteiroEncadeada) == 0){
                    adcComecoEncadeada(ponteiroEncadeada, nome, rg);
                }
                else{
                    adcFimEncadeada(ponteiroEncadeada, nome, rg);

                }
                break;
            case 3:

                cout << "Opcao 3 foi escolhida. 3 - insercao de um node na posicao N.\n";

                cout << "Escreva a posicao:\n";
                cin >> posicao;
                cout << "Escreva o nome:\n";
                cin >> nome;
                cout << "Escreva o RG\n";
                cin >> rg;

                if(posicao == 0){
                        adcComecoEncadeada(ponteiroEncadeada, nome, rg);
                }
                else if(posicao == retornaTamanho(ponteiroEncadeada) -1){
                    adcFimEncadeada(ponteiroEncadeada, nome, rg);

                }
                else {
                    adcPosicaoEncadeada(ponteiroEncadeada, nome, rg, posicao);
                }

                break;
            case 4:
                cout << "Opcao 4 foi escolhida. 4 - Retirar um node no inicio da lista.\n";

                removeInicioEncadeada(ponteiroEncadeada);

                break;
            case 5:
                cout << "Opcao 5 foi escolhida. 5 - Retirar um node no fim da lista.\n";

                if(retornaTamanho(ponteiroEncadeada) == 1){
                    removeInicioEncadeada(ponteiroEncadeada);
                }
                else{
                    removeFimEncadeada(ponteiroEncadeada);

                }
            case 6:
                cout << "Opcao 6 foi escolhida. 6 - Retirar um node na posicao N.\n";
                cout << "Escreva uma posicao\n";
                cin >> posicao;

                if(posicao == 0){
                    removeInicioEncadeada(ponteiroEncadeada);
                }
                else if(posicao == retornaTamanho(ponteiroEncadeada) -1){
                    removeFimEncadeada(ponteiroEncadeada);

                }
                else {
                    removePosicaoEncadeada(ponteiroEncadeada, posicao);
                }

                break;

            case 7:
                cout << "Opcao 7 foi escolhida. 7 - Procurar um node com o campo RG.\n";
                cout << "Escreva um rg\n";
                cin >> rg;

                cout << "\n O nome do rg " << rg << " eh: " << retornaNomeEncadeada(ponteiroEncadeada, rg) << "\n";
                break;
            default:
                cout << "Opcao invalida";
                break;
        }
    }

}
