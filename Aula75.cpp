#include <fstream>
#include <string.h>
#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    ifstream input("Texto.txt");

    string textoLido;


    for(string line; getline(input, line);){

        textoLido += line;
    }

    cout << textoLido;
    return 0;
}
