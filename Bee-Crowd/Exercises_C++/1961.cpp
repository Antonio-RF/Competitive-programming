#include <bits/stdc++.h>
using namespace std;

int main() {

	int pulo, tamanho,numero;
	cin >> pulo >> tamanho;

	int vetor[tamanho];

	for (int c=0 ; c < tamanho ; c++) {
		cin >> numero;
		vetor[c] = numero;
	}
	
	bool winner;
	winner = true;
	for (int k=0 ; k < (tamanho-1) ; k++) {
		if (abs(vetor[k+1] - vetor[k]) > pulo){
			winner = false;
			break;
		}
	}
	
	if (winner) {
		cout << "YOU WIN" << endl;
	}
	else {
		cout << "GAME OVER" << endl;
	}

}
