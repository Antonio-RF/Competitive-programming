#include <bits/stdc++.h>
using namespace std;

int main() {

	int numero;
	cin >> numero;

	if (numero == 0) {
		cout << "3.0000000000" << endl;
	}
	else if (numero == 1) {
		cout << "3.1666666667" << endl;
	}

	else {
		
		double k= 0.1666666667;
		double soma;
		for (int c=2 ; c<=numero ; c++ ) {
			if (c == 2) {
				k = 6.0 + (1.00/6.00);
				k = 1.0 / k;
			}
			else {
				k = 6.0 + k;
				k = 1.0 / k;

			}

		}

		soma = 3 + k;
		
		printf("%.10f\n",soma);

	}

}
