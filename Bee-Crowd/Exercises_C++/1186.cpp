#include <bits/stdc++.h>
using namespace std;

int main() {

    char operacao;
    cin >> operacao;

    double matriz[12][12];

    for (int i = 0 ; i < 12 ; i++) {
        for (int j = 0 ; j < 12 ; j++) {
            cin >> matriz[i][j];
        }
    }


    double soma = 0;

    for (int i = 0 ; i < 12 ; i++) {
        for (int j = 0 ; j < 12 ; j++) {
            if ((i + j) > 11) {
                soma += matriz[i][j];
            }
        }
    }


    double media;
    media = soma / 66;
    if (operacao == 'S') {
        printf("%.1f\n", soma);
    }
    else {
        printf("%.1f\n", media);
    }
}

