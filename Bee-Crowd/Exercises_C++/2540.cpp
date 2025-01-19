#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd;
	while (cin >> qntd) {
		
		int voto;
		int expulsa;
		double limite;
		expulsa = 0;
		for (int c=0 ; c<qntd ; c++) {

			cin >> voto;
			if (voto == 1) {
				expulsa += 1;
			}

		}
		
		limite = qntd * 0.6666;

		if (expulsa >= limite) {
			cout << "impeachment" << endl;
		}
		else {
			cout << "acusacao arquivada" << endl;
		}
	}

}
