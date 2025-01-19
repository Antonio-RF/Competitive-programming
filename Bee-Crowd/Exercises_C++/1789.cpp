#include <bits/stdc++.h>
using namespace std;

int main() {

	int tamanho;
	
	while (cin >> tamanho) {

		int vetor[tamanho],numero,maior;
		maior = 0;
		for (int c=0 ; c < tamanho ; c++) {
			cin >> numero;
			vetor[c] = numero;
			if (vetor[c] > maior) {
				maior = vetor[c];
			}
		}

		if (maior < 10) {
			cout << "1" << endl;
		}
		else if (maior < 20) {
			cout << "2" << endl;
		}
		else {
			cout << "3" << endl;
		}
	}



}
