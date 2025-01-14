#include <bits/stdc++.h>
using namespace std;

int main() {

    long int ultimo, penultimo,atual,numero;
    ultimo = 0;
    penultimo = 1;
    atual = 1;

    cin >> numero;
    long int vetor[numero+2];

        vetor[0] = ultimo;
        vetor[1] = penultimo;
    for (int c = 0 ; c < 62 ; c++) {

        vetor[c+2] = atual;
        ultimo = penultimo;
        penultimo = atual;
        atual = ultimo + penultimo;

        }
		

		int count = 0;
   		while (count < numero) {
        int indice;
        cin >> indice;

        cout << "Fib(" << indice << ") = " << vetor[indice] << endl;

        count += 1;
		if (count == numero) {
			break;
		}
    }

		return 0;
}

