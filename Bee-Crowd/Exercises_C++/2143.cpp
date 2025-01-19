#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t != 0) {
		
		for (int c=0 ; c<t ; c++) {
			
			int numero;
			cin >> numero;

			int soma;
			soma = 0;
			if (numero % 2 == 0) {
				soma += 2;
				soma += (2 * (numero-2));
				cout << soma << endl;
			}
			else {
				soma += 1;
				soma += (2 * (numero-1));
				cout << soma << endl;
			}
			
		}

		cin >> t;
	}
}
