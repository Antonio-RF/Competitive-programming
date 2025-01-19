#include <bits/stdc++.h>
using namespace std;

int main() {


	int numero;
	cin >> numero;
	for (int c = 1 ; c < (numero + 1) ; c++) {

		if (numero % c == 0) {
			cout << c << endl;
		}


	}

}
