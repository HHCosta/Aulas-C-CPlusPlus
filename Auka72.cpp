#include <stdio.h>
//#include <new>
#include <string>
#include <iostream>

using namespace std;

struct frutas{
    string cor;
    string nome;
};

int main(){

//    frutas *primeirafruta = new frutas;
//
//    primeirafruta->cor = "Amarela";
//    primeirafruta->nome = "Banana";
//
//    cout << "Nome: " << primeirafruta->nome << " Cor: " << primeirafruta->cor;
//
//
//    return 0;

    struct frutas primeirafruta;
    primeirafruta.cor = "Amarela";
    primeirafruta.nome = "Banana";
    cout << "Nome: " << primeirafruta.nome << " Cor: " << primeirafruta.cor;
    return 0;
}





//
//
//#include <stdio.h>
//#include <string>
//// #include <new>
//#include <iostream>
//
//using namespace std;
//
//struct FRUTA {
//        string cor;
//        string nome;
//};
//
//int main()
//{
//        struct FRUTA primeirafruta;
//        primeirafruta.cor = "Amarela";
//        primeirafruta.nome = "Banana";
//
//        cout << "Fruta: " << primeirafruta.nome << '\n';
//
//        return 0;
//}
