#include <bits/stdc++.h>
using namespace std;

int main() {
    int interesse;
    cin >> interesse;

    char operacao;
    cin >> operacao;

    double matriz[12][12];

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
        }
    }

    double soma = 0;
    if (operacao == 'S') {
        for (int k = 0; k < 12; k++) {
            soma += matriz[k][interesse];
        }
        cout << fixed << setprecision(1) << soma << endl;
    } else if (operacao == 'M') {
        for (int k = 0; k < 12; k++) {
            soma += matriz[k][interesse];
        }
        double media = soma / 12;
        cout << fixed << setprecision(1) << media << endl;
    }

    return 0;
}
