#include <bits/stdc++.h>
using namespace std;

int main() {

	long long numero;
	cin >> numero;

	int vetor[1000];
	int count,digito;
	count = 0;
	digito = 0;

	while (numero != 0) {

		digito = numero % 10;
		vetor[count] = digito;
		count += 1;
		numero = numero / 10;
	}
	
	for (int c=0 ; c < (count-1) ; c++) {
		
		cout << vetor[c];
		
	}
	
	cout << vetor[count-1] << endl;
}
