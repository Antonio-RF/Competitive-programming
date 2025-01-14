#include <bits/stdc++.h>
using namespace std;

int main() {

	int tamanho;
	cin >> tamanho;

	int numero, menor, indice;
	menor = 10000;
	indice = 0;

	for (int c=1 ; c < (tamanho+1) ; c++) {

		cin >> numero;
		if (numero < menor) {
			menor = numero;
			indice = c;
		}
		
	}
	
	cout << indice << endl;

	return 0;

}
