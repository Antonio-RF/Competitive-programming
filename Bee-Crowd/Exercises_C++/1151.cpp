#include <bits/stdc++.h>
using namespace std;

int main() {

	int ultimo, penultimo,atual,numero;
	ultimo = 0;
	penultimo = 1;
	atual = 1;

	cin >> numero;
	int vetor[numero+2];
	
	if (numero == 1) {
		cout << "0" << endl;
	}
	else if (numero == 2) {
		cout << "0 1" << endl;
	}
	
	else {
		vetor[0] = ultimo;
		vetor[1] = penultimo;
	for (int c = 0 ; c < (numero-2) ; c++) {
	
		vetor[c+2] = atual;
		ultimo = penultimo;
		penultimo = atual;
		atual = ultimo + penultimo;

		}

	}
	
	int copia = 0;
	for (int k=0 ; k < (numero-1); k++) {
		
		cout << vetor[k] << " ";
		copia = k;
	}
	
	cout << vetor[copia+1] << endl;

}
