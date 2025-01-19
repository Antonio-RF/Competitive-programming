#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd;
	cin >> qntd;

	for (int c = 0 ; c < qntd ; c++) {

		int soma, numero;
		cin >> numero;
		soma = 0;

		for (int i = 1 ; i < numero ; i++) {
			
			if (numero % i == 0) {
				soma += i;
				}
		

			if (soma > numero) {
				break;
				}

		}

		if (soma == numero) {
                cout << numero << " eh perfeito" << endl;
            }
            else {
                cout << numero << " nao eh perfeito" << endl;
            }
		
	}
		
}
