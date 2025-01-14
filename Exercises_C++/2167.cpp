#include <bits/stdc++.h>
using namespace std;

int main() {

	int tamanho;
	cin >> tamanho;
	int vetor[tamanho];
	
	for (int c=0 ; c<tamanho ; c++) {
		cin >> vetor[c];
	}
	
	int queda;
	queda = 0;
	for (int k=0 ; k<(tamanho-1) ; k++) {
		if (vetor[k+1] <  vetor[k]) {
			queda = k+2;
			break;
		}
	}

	cout << queda << endl;
}	
