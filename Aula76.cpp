#include <fstream>
#include <string.h>
#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    ofstream Texto;

    Texto.open("Texto.txt");

    Texto << "";

    Texto.close();

    return 0;
}
