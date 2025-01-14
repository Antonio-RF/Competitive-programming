#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd,ni,ci;
	while(cin >> qntd) {

	int numerador, denominador;
	numerador = 0;
	denominador = 0;

	for (int i=0 ; i<qntd ; i++) {
		
		cin >> ni >> ci;
		numerador += ni * ci;
		denominador += 100 * ci;
	}
	
	double resultado;
	resultado = (numerador * 1.0) / denominador;

	printf("%.4f\n", resultado);

	}
}
