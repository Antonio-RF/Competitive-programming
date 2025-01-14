#include <bits/stdc++.h>
using namespace std;

int main() {


	int numero,count,soma;
	cin >> numero;

	while (numero != 0) {
			
		count = 0;
		if (numero % 2 == 0) {
			soma = 0;
			while (count < 5){
				soma += numero;
				numero += 2;
				count ++;
			}	

		}
		else if (numero % 2 != 0) {
				numero ++;
				soma = 0;
				while (count < 5){
					soma += numero;
					numero += 2;
					count ++;
				}
		}

		cout << soma << endl;
		cin >> numero;
			
	}
}
