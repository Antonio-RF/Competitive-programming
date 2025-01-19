#include <bits/stdc++.h>
using namespace std;

int main() {


	int numerador, denominador, count;
	double soma;
	soma = 0;
	count = 1;
	numerador = 1;
	denominador = 1;
	while (count <= 100) {
		
		soma += (numerador * 1.0 / denominador);
		denominador += 1;
		count += 1;


	}

	printf("%.2f\n", soma);
}
