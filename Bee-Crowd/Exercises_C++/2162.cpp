#include <bits/stdc++.h>
using namespace std;

int main() {
    int numero;
    cin >> numero;

    vector<int> vetor(numero);
    for (int c = 0; c < numero; c++) {
        cin >> vetor[c];
    }

    bool paisagem = true;

    if (numero == 1) {
        paisagem = true;
    }
    else if (numero == 2) {
        if (vetor[0] == vetor[1]) {
            paisagem = false;
        }
    }
    else {
        int corretor = vetor[1] - vetor[0];
        int copia = corretor;

        for (int k = 1; k < (numero - 1); k++) {
            corretor = vetor[k + 1] - vetor[k];
            if ((copia > 0 && corretor >= 0) || (copia < 0 && corretor <= 0)) {
                paisagem = false;
                break;
            }
            copia = corretor;
        }
    }

    if (paisagem) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}

