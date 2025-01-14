#include <iostream>
using namespace std;

int main() {

    int numero,tamanho;
    cin >> numero;

    while (numero != 0) {
        tamanho = numero + 1;
        int vetor1[tamanho];
        for (int c = 1 ; c <= numero ; c ++) {
            vetor1[c] = c;
        }

        for (int c = 1 ; c <= numero ; c ++) {
            cout << vetor1[c];
            if (c < numero) {
                cout << " ";
            }
        }
        cout << endl;
        cin >> numero;

    }
}