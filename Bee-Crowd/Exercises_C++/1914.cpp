#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd,nm1,nm2,soma;
	string nome1,escolha1,nome2,escolha2;

	cin >> qntd;
	for (int c=0 ; c < qntd ; c++) {

		cin >> nome1 >> escolha1 >> nome2 >> escolha2;
		cin >> nm1 >> nm2;
		
		soma = nm1 + nm2;

		if (soma % 2 == 0 && escolha1 == "PAR") {
			cout << nome1 << endl;
		}
		else if (soma % 2 != 0 && escolha1 == "PAR") {
			cout << nome2 << endl;
		}
		
		else if (soma % 2 == 0 && escolha1 == "IMPAR") {
            cout << nome2 << endl;
        }
        else if (soma % 2 != 0 && escolha1 == "IMPAR") {
            cout << nome1 << endl;
        }


	}
}
