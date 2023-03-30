#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>
#include <string.h>

using namespace std;

int main(){



    ofstream ArquivoDeSaida;
    ArquivoDeSaida.open("Texto.txt", std::ios_base::app);
    ArquivoDeSaida << "Aleatorio";
}
