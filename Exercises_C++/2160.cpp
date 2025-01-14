#include <bits/stdc++.h>
using namespace std;

int main() {

	string frase;
	getline(cin, frase);

	int tamanho = frase.length();

	if (tamanho <= 80) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

}
