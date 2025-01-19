#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd;
	cin >> qntd;

	for (int c = 0 ; c < qntd ; c++) {

		int numero;
		cin >> numero;
		bool primo = true;
		for (int i = 2 ; i <= sqrt(numero) ; i++) {
			if (numero % i == 0) {
				primo = false;
				break;
				}

		}

		if (primo == true) {
			cout << numero << " eh primo" << endl;
		}
		else {
			cout << numero << " nao eh primo" << endl;
		}
	}
}


