#include <bits/stdc++.h>
using namespace std;

int main() {

	int numero, multiplicacao;
	cin >> numero;
	multiplicacao = 1;

	for (int c = numero ; c > 0 ; c--) {

		multiplicacao *= c;

	}

	cout << multiplicacao << endl;

}
