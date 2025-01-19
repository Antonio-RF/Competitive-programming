#include <iostream>
using namespace std;

int main() {

    double nota, media,copia1,copia2;
    int count,opcao;

    cin >> nota;
    count = 0;
    if (nota >= 0 and nota <= 10) {
        count += 1;
        copia1 = nota;
    }
    else {
            cout << "nota invalida" << endl;
        }

    opcao = 1;
    while (opcao != 2) {
        cin >> nota;
        if (nota >= 0 and nota <= 10 and count == 0) {
        count += 1;
        copia1 = nota;
        }
        else if (nota >= 0 and nota <= 10 and count == 1) {
        count += 1;
        copia2 = nota;
        }
        else {
            cout << "nota invalida" << endl;
        }
        if (count == 2){
    media = (copia1 + copia2) / 2;
    printf("media = %.2f\n", media);
    count = 0;
    cout << "novo calculo (1-sim 2-nao)" << endl;
    cin >> opcao;
    while (opcao < 1 or opcao > 2){
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> opcao;
    }
        }

    }
}