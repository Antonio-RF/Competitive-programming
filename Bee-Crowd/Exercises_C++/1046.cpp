#include <iostream>
using namespace std;

int main(){

    int comecou, terminou;
    cin >> comecou >> terminou;

    if (comecou == terminou) {
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }
    else if (comecou > terminou) {
        int resposta;
        resposta = 24 - abs(comecou - terminou);
        printf("O JOGO DUROU %d HORA(S)\n", resposta);
    }
    else {
        int resposta;
        resposta = abs(comecou - terminou);
        printf("O JOGO DUROU %d HORA(S)\n", resposta);
    }
}