#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd,numero;
	cin >> qntd;

	for (int c=0 ; c < qntd ; c++){ 

		cin >> numero;
		if (numero % 2 == 0) {
			cout << "0" << endl;
		}
		else {
			cout << "1" << endl;
		}

	}

}
