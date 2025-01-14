#include <bits/stdc++.h>
using namespace std;

int main() {

	int tamanho;
	cin >> tamanho;
	
	int vetor[tamanho];
	bool atacado[tamanho] = {false};
	long long total = 0;
	for (int c=0 ; c < tamanho ; c++){
		cin >> vetor[c];
		total += vetor[c];
	}

	long long int atacadas,count;
	atacadas = 0;
	long long num_ataque = 0;
	count = 0;

	while (true) {
		if(vetor[count] != 0 && !atacado[count]){
			num_ataque += 1;
			atacado[count] = true;
		}
		if (vetor[count] % 2 == 0) {
			if (vetor[count] > 0) {
				vetor[count] -= 1;
				atacadas += 1;
			}

			count -= 1;
				if (count < 0) {
					break;
				}
		} else {
			if (vetor[count] > 0) {
				vetor[count] -= 1;
				atacadas += 1;
			}

			count += 1;
				if (count > tamanho - 1) {
					break;
				}
			}
		}


		total -= atacadas;
		cout << num_ataque << ' ' << total << endl; 
		
		
	}
	
