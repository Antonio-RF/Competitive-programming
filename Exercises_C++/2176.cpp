#include <bits/stdc++.h>
using namespace std;

int main() {

	string frase;
	char caracter;
	int contador = 0;

	getline(cin, frase);
	
	caracter = '1';

	for (char c : frase) {
		if (c == caracter) {
			contador += 1;
		}
	}
	
	if (contador % 2 == 0) {
		cout << frase << "0" << endl;
	}
	else {
		cout << frase << "1" << endl;
	}


}
