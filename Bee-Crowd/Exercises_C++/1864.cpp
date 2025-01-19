#include <bits/stdc++.h>
using namespace std;


int main() {

	string frase = "LIFE IS NOT A PROBLEM TO BE SOLVED";

	int qntd;
	cin >> qntd;

if (qntd > 1) {
	for (int c=0 ; c < (qntd-1) ; c++) {
		cout << frase[c];
	}

	cout << frase[qntd-1] << endl;
	}

else {
	cout << "L" << endl;
}

}
