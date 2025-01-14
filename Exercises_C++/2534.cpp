#include <bits/stdc++.h>
using namespace std;

int main() {

	int tam_vetor, qntd_consultas;
	
	while (cin >> tam_vetor >> qntd_consultas) {
		
		int vetor[tam_vetor];

		for (int c=0 ; c<tam_vetor ; c++) {
			cin >> vetor[c];
		}
		
		for (int i=0 ; i < tam_vetor-1 ; i++) {

			for (int j=0 ; j < tam_vetor-i-1 ; j++) {
				if (vetor[j] < vetor[j+1]) {
					swap(vetor[j],vetor[j+1]);
				}
			}

		}

		int consulta;
		
		for (int k=0 ; k<qntd_consultas ; k++) {

			cin >> consulta;
			cout << vetor[consulta-1] << endl;

		}

	}

}
