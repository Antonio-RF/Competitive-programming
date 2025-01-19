#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {

	int numero;
	cin >> numero;

	double resultado;
	resultado = (pow(((1 + sqrt(5)) / 2), numero) - pow(((1 - sqrt(5)) / 2), numero)) / sqrt(5);

	printf("%.1f\n", resultado);

}
