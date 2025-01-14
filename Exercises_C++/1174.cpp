#include <bits/stdc++.h>
using namespace std;

double vetor[100];

int main() {

	int count1 = 0;
	double numero,resultado;
	while (count1 < 100) {
		cin >> numero;
		vetor[count1] = numero;
		count1 += 1;
	}

	for (int c = 0 ; c < 100 ; c++) {

		if (vetor[c] <= 10) {
			resultado = 1.0 * vetor[c];
			printf("A[%d] = %.1f\n", c, resultado);
		}

	}
}
