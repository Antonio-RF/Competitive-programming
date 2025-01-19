#include <bits/stdc++.h>
using namespace std;

int main() {

	double numero;
	cin >> numero;

	for (int c = 0 ; c < 100 ; c++) {

		printf("N[%d] = %.4f\n", c, numero);
		numero = numero / 2;

	}
}
