#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd, h_min, h_max;
	while (cin >> qntd >> h_min >> h_max) {

		int altura, resultado = 0;
		
		for (int c=0 ; c<qntd ; c++) {
			cin >> altura;

			if (altura >= h_min && altura <=h_max) {
				resultado += 1;
			}
		}

		cout << resultado << endl;
	}
}
