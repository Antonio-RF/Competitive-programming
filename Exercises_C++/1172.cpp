#include <bits/stdc++.h>
using namespace std;

int vetor[10];

int main() {
	
	int numero;
	for (int c = 0 ; c < 10 ; c++) {
		
		cin >> numero;
		vetor[c] = numero;

	}
	
	for (int i = 0 ; i < 10 ; i++) {

		if (vetor[i] <= 0) {
		
			vetor[i] = 1;

		}
		}
	for (int k = 0 ; k < 10 ; k++) {

		cout << "X[" << k << "] = " << vetor[k] << endl; 

	}

}
