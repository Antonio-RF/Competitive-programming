#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd;
	cin >> qntd;
	for (int c=0 ; c < qntd ; c++) {
		
		int numero;
		cin >> numero;
		if ((2015 - numero) > 0) {
			cout << abs(numero - 2015) << " D.C." << endl;
		}
		else {
			cout << abs(numero - 2014) << " A.C." << endl;
		}
	}
}
