#include <bits/stdc++.h>
using namespace std;


int main() {

    int tamanho;
    cin >> tamanho;

    int vetor[tamanho];
    int menor, posicao;
    menor = 10000;
    posicao = -1;


    for (int c=0 ; c < tamanho ; c++) {

        cin >> vetor[c];

        if (vetor[c] < menor) {
            menor = vetor[c];
            posicao = c;
        }

    }



    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;
}
