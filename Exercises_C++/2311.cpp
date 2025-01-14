#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd;
	cin >> qntd;

	for (int c=0 ; c<qntd ; c++) {
		string nome;
		double nota,maior,menor,soma;
		maior = 0;
		menor = 100;
		soma = 0;

		double peso;
		cin >> nome;
		cin >> peso;

		for(int i=0 ; i<7 ; i++) {
			cin >> nota;
			
			if (nota > maior) {
				maior = nota;
			}
			if (nota < menor) {
				menor = nota;
			}

			soma += nota;
		}

		soma -= maior;
		soma -= menor;

		double resultado;
		resultado = soma * peso;

		cout << nome;
		printf(" %.2f\n",resultado);
		
	}
}
