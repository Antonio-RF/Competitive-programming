#include <bits/stdc++.h>
using namespace std;

int main() {

	int interesse;
	cin >> interesse;

	char operacao;
	cin >> operacao;

	int countl, countm;
	countl= 0;
	countm = 0;
	double matriz[12][12];
	double linhas[12];


	int numero;

		
	  while (countm < 12) {
      	cin >> numero;
        linhas[countl] = numero;
      	countl += 1;

      	if (countl == 12) {
            for (int i = 0; i < 12; i++) {
               	matriz[countm][i] = linhas[i];
           	 }
           	countl = 0;
           	countm += 1;
       	 }
   	   }
	
	double soma = 0;
	if (operacao == 'S') {
		for (int k=0 ; k < 12 ; k++) {
			soma += matriz[interesse][k];
		}
		printf("%.1f", soma);
	}
	else if (operacao == 'M') {
        for (int k=0 ; k < 12 ; k++) {
            soma += matriz[interesse][k];
        }
		double media;
		media = (soma / 12);
		printf("%.1f", media);
    }

    }


